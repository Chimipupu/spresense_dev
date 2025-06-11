/**
 * @brief SPRESENSE Arduino IDEファイル
 * @author Chimipupu(https://github.com/Chimipupu)
 * @date 2025-06-11
 * @version 1.0
 * @note SPRESENSE 評価F/W開発
 */

void setup()
{
    pinMode(LED0, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}

void loop()
{
    // Turn on LED0
    digitalWrite(LED0, HIGH);
    delay(200);
    digitalWrite(LED0, LOW);

    // Turn on LED1
    digitalWrite(LED1, HIGH);
    delay(200);
    digitalWrite(LED1, LOW);

    // Turn on LED2
    digitalWrite(LED2, HIGH);
    delay(200);
    digitalWrite(LED2, LOW);

    // Turn on LED3
    digitalWrite(LED3, HIGH);
    delay(200);
    digitalWrite(LED3, LOW);

    delay(500);
}