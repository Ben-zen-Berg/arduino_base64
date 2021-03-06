char cmykPngHex[95] = {
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

unsigned int cmykPngSize = 95;

String cmykPngBase64 = "iVBORw0KGgoAAAANSUhEUgAAAAQAAAAE"
                       "AgMAAADUn3btAAAADFBMVEUA////AP//"
                       "/wAAAAA7TFkTAAAADklEQVQI12NgBcL1"
                       "DOsBAwABaRnqNHsAAAAASUVORK5CYII=";

char cmykJpgHex[424] = {
  // Offset 0x00000000 to 0x00000423
  0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, 0x4A, 0x46, 0x49, 0x46, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0xFF, 0xDB, 0x00, 0x43,
  0x00, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x04, 0x04, 0x04, 0x05,
  0x05, 0x05, 0x06, 0x07, 0x0C, 0x08, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0B,
  0x0B, 0x09, 0x0C, 0x11, 0x0F, 0x12, 0x12, 0x11, 0x0F, 0x11, 0x11, 0x13,
  0x16, 0x1C, 0x17, 0x13, 0x14, 0x1A, 0x15, 0x11, 0x11, 0x18, 0x21, 0x18,
  0x1A, 0x1D, 0x1D, 0x1F, 0x1F, 0x1F, 0x13, 0x17, 0x22, 0x24, 0x22, 0x1E,
  0x24, 0x1C, 0x1E, 0x1F, 0x1E, 0xFF, 0xDB, 0x00, 0x43, 0x01, 0x05, 0x05,
  0x05, 0x07, 0x06, 0x07, 0x0E, 0x08, 0x08, 0x0E, 0x1E, 0x14, 0x11, 0x14,
  0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
  0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
  0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
  0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
  0x1E, 0x1E, 0xFF, 0xC2, 0x00, 0x11, 0x08, 0x00, 0x04, 0x00, 0x04, 0x03,
  0x01, 0x11, 0x00, 0x02, 0x11, 0x01, 0x03, 0x11, 0x01, 0xFF, 0xC4, 0x00,
  0x14, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC4, 0x00, 0x15, 0x01,
  0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x05, 0xFF, 0xDA, 0x00, 0x0C, 0x03, 0x01,
  0x00, 0x02, 0x10, 0x03, 0x10, 0x00, 0x00, 0x00, 0x28, 0x35, 0x9F, 0xFF,
  0xC4, 0x00, 0x1F, 0x10, 0x00, 0x00, 0x06, 0x01, 0x05, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x04, 0x05,
  0x06, 0x13, 0x00, 0x07, 0x08, 0x14, 0x31, 0x42, 0xFF, 0xDA, 0x00, 0x08,
  0x01, 0x01, 0x00, 0x01, 0x3F, 0x00, 0xDC, 0xEC, 0xAD, 0xF9, 0x83, 0x5C,
  0x64, 0x2D, 0x4D, 0x2B, 0xA8, 0x46, 0x4F, 0x1A, 0xB2, 0xEA, 0x00, 0xFB,
  0x4C, 0x50, 0xBD, 0x67, 0xFF, 0xC4, 0x00, 0x1F, 0x11, 0x00, 0x01, 0x03,
  0x03, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x02, 0x05, 0x06, 0x00, 0x01, 0x04, 0x11, 0x12, 0x42, 0x52,
  0x61, 0xFF, 0xDA, 0x00, 0x08, 0x01, 0x02, 0x01, 0x01, 0x3F, 0x00, 0x85,
  0x4D, 0x5E, 0xF2, 0x99, 0x02, 0x62, 0x9B, 0x55, 0x5F, 0x77, 0x14, 0xF7,
  0x57, 0x95, 0xFF, 0xC4, 0x00, 0x1D, 0x11, 0x00, 0x02, 0x02, 0x02, 0x03,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x11, 0x02, 0x05, 0x04, 0x12, 0x00, 0x03, 0x21, 0x31, 0xFF, 0xDA, 0x00,
  0x08, 0x01, 0x03, 0x01, 0x01, 0x3F, 0x00, 0xA6, 0xB6, 0xCA, 0xA0, 0xC3,
  0x8D, 0x75, 0x74, 0xB4, 0xE9, 0x83, 0x41, 0x34, 0xCE, 0xC7, 0xD9, 0x33,
  0xF4, 0xF3, 0xFF, 0xD9
};

unsigned int cmykJpgSize = 424;

String cmykJpgBase64 = "/9j/4AAQSkZJRgABAQAAAQABAAD/2wBD"
                       "AAUDBAQEAwUEBAQFBQUGBwwIBwcHBw8L"
                       "CwkMEQ8SEhEPERETFhwXExQaFRERGCEY"
                       "Gh0dHx8fExciJCIeJBweHx7/2wBDAQUF"
                       "BQcGBw4ICA4eFBEUHh4eHh4eHh4eHh4e"
                       "Hh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4e"
                       "Hh4eHh4eHh4eHh4eHh7/wgARCAAEAAQD"
                       "AREAAhEBAxEB/8QAFAABAAAAAAAAAAAA"
                       "AAAAAAAAB//EABUBAQEAAAAAAAAAAAAA"
                       "AAAAAAQF/9oADAMBAAIQAxAAAAAoNZ//"
                       "xAAfEAAABgEFAAAAAAAAAAAAAAACAwQF"
                       "BhMABwgUMUL/2gAIAQEAAT8A3Oyt+YNc"
                       "ZC1NK6hGTxqy6gD7TFC9Z//EAB8RAAED"
                       "AwUAAAAAAAAAAAAAAAMCBQYAAQQREkJS"
                       "Yf/aAAgBAgEBPwCFTV7ymQJim1VfdxT3"
                       "V5X/xAAdEQACAgIDAQAAAAAAAAAAAAAB"
                       "EQIFBBIAAyEx/9oACAEDAQE/AKa2yqDD"
                       "jXV0tOmDQTTOx9kz9PP/2Q==";
