const char base64_charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                              "abcdefghijklmnopqrstuvwxyz"
                              "0123456789"
                              "+/";

/* base64_decode:
      Description:
        Encode a char array to a base64 encoded string
      Parameters:
        bytes_to_encode: the char array to encode
        len_to_encode: the length of the array
      Return value:
        the base64 encoded string
*/
static String base64_encode(char *bytes_to_encode, int len_to_encode) {
  int len_encoded = (ceil(len_to_encode) / 3) * 4;
  char bytes_encoded[len_encoded + 1];
  int pos_in = 0;
  int pos_out = 0;
  while (pos_in < len_to_encode) {
    char out[4];
    int counter = 0;
    out[0] = (bytes_to_encode[pos_in + 0] & 0xfc) >> 2;
    out[1] = (bytes_to_encode[pos_in + 0] & 0x03) << 4;
    if (pos_in + 1 < len_to_encode) {
      out[1] += (bytes_to_encode[pos_in + 1] & 0xf0) >> 4;
      out[2] = (bytes_to_encode[pos_in + 1] & 0x0f) << 2;
      counter++;
    }
    if (pos_in + 2 < len_to_encode) {
      out[2] += (bytes_to_encode[pos_in + 2] & 0xc0) >> 6;
      out[3] = (bytes_to_encode[pos_in + 2] & 0x3f);
      counter++;
    }
    bytes_encoded[pos_out + 0] = base64_charset[out[0]];
    bytes_encoded[pos_out + 1] = base64_charset[out[1]];
    bytes_encoded[pos_out + 2] = counter ? base64_charset[out[2]] : '=';
    bytes_encoded[pos_out + 3] = counter == 2 ? base64_charset[out[3]] : '=';
    pos_in += 3;
    pos_out += 4;
  }
  bytes_encoded[pos_out] = '\0';
  return String(bytes_encoded);
}

/* base64_encode_str:
      Description:
        Prepares arguments from a string and executes the base64_encode function with them to return its result.
      Parameters:
        string_to_encode: a string to encoded
      Return value:
        the base64 encoded string
*/
static String base64_encode_str(String string_to_encode) {
  int len_to_encode = string_to_encode.length();
  if (!len_to_encode) {
    return String();
  }
  char bytes_to_encode[len_to_encode + 1];
  string_to_encode.toCharArray(bytes_to_encode, len_to_encode + 1);
  return String(base64_encode(bytes_to_encode, len_to_encode));
}
