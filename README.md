# Arduino Base64 Codec
Another binary based simple Base64 Codec for Arduino.

I've coded this library because i got some issues with the already existing ones.
Most of these libraries contain a file called Base64.cpp (or revisions of it), its logic creates a final padding pattern on the encoded string which is not compatible with the Base24 standard. If no padding needed, the logic in Base64.cpp adds an "AA==", if a double equal sign is needed as padding, it adds "A=" and insteed of a single equal sign padding it adds an "A". The Base64.cpp decoder uses its own padding pattern, so that e.g. the decoding of a simple browser authentication does not have to match the original input, since the last characters could be truncated.

Thus, this library encodes strings or binary data into base64 codes that can be processed by web servers or email clients. It can also correctly decode base64 codes encoded by web browsers or email clients.

If you need encodings and decodings, please include base64.h - that will includes both, base64encode.h and base64decode.h to your project.
If you only need encodings or decodings, including base64encode.h or base64decode.h will be sufficient.

# Example
## Encode a simple string
```c++
String encoded = base64_encode_str("foobar");
Serial.println(encoded);
```

## Encode binary data
```c++
char data[95] = {
  // Offset 0x00000000 to 0x00000094
  0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
  0x02, 0x03, 0x00, 0x00, 0x00, 0xD4, 0x9F, 0x76, 0xED, 0x00, 0x00, 0x00,
  0x0C, 0x50, 0x4C, 0x54, 0x45, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x4C, 0x59, 0x13, 0x00, 0x00, 0x00,
  0x0E, 0x49, 0x44, 0x41, 0x54, 0x08, 0xD7, 0x63, 0x60, 0x05, 0xC2, 0xF5,
  0x0C, 0xEB, 0x01, 0x03, 0x00, 0x01, 0x69, 0x19, 0xEA, 0x34, 0x7B, 0x00,
  0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
};

unsigned int length = 95;

String encoded = base64_encode(data, length);
Serial.println(encoded);
```

## Decode
```c++
const char encoded = "Zm9vYmFy";
String decoded = base64_decode(encoded);
Serial.println(decoded);
```

# API
## static String base64_encode_str(String string_to_encode)
**Arguments**
- `string_to_encode`: A simple string.

**Return**
- A Base64 encoded string.

## static String base64_encode(char *bytes_to_encode, int len_to_encode)
**Arguments**
- `bytes_to_encode`: raw binary data as a byte array.
- `len_to_encode`: Number of bytes of bytes_to_encode data.

**Return**
- A Base64 encoded string.

## static String base64_decode(String encoded_string)
**Arguments**
- `encoded_string`: A Base64 encoded string.

**Return**
- A simple string (can also be raw binary data as a string).

# Disclaimer
According to MIT License.
