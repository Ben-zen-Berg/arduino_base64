// Base64test.ino
// IDE 1.8.9
// ESP32

#include "base64.h"
#include "imageData.h"

String test(String str) {
  String encoded = base64_encode_str(str);
  String decoded = base64_decode(encoded);
  return "String = " + str + "\nEncodet: " + encoded + "\nDecodet: " + decoded + "\n------------------------";
}

String imageTest(char *rawData, String base64, unsigned int size, String fileType) { 
  String encoded = base64_encode(rawData, size);
  String decoded = base64_decode(encoded);
  fileType += (base64 == encoded) ? " file matches " : " file does not match ";
  String reconversion = (decoded == rawData) ? "matches" : "does not match";
  String msg = "The base64-encoding of the " + fileType + "the reference.\nEncodet:   " + encoded + "\nReference: " + base64;
  return msg + "\nThe decoding of the encoded base64 string " + reconversion + " the original one.\n------------------------";
}

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println(test("Length % 3: __0"));
  Serial.println(test("Length % 3: _1"));
  Serial.println(test("Length % 3: 2"));
  Serial.println(test("The quick brown fox jumps over the lazy dog."));
  Serial.println(test("!\"§$%&/()=?"));
  Serial.println(test("<ÄÖÜßäöü|ÑÆÝÐÇ|čøêœå>"));
  Serial.println(test("Math: 3 * 7 = 21 / 2 = 10.5"));
  Serial.println(imageTest(cmykPngHex, cmykPngBase64, cmykPngSize, "PNG"));
  Serial.println(imageTest(cmykJpgHex, cmykJpgBase64, cmykJpgSize, "JPG"));
}

void loop() {
  // empty! 
}
