#include <Arduino.h>
#include "usr/tokenizer.h"

void setup() {
    Serial.begin(115200);

    const char* expr = "2+3*4";
    auto tokens = tokenize(expr);

    for (auto& t : tokens) {
        if (t.type == TOKEN_NUMBER) {
            Serial.print("NUM: ");
            Serial.println(t.value);
        } else {
            Serial.print("OP: ");
            Serial.println(t.op);
        }
    }
}

void loop() {}
