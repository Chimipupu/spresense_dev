/**
 * @brief SPRESENSE Arduino IDEファイル
 * @author Chimipupu(https://github.com/Chimipupu)
 * @date 2025-06-11
 * @version 1.0
 * @note SPRESENSE 評価F/W開発
 */

// ARM Cortex-M4F用のNOP命令のマクロ
#define NOP() __asm__ __volatile__("nop")
static void blink_led(void);

static void blink_led(void)
{
    // Turn all LEDs on
    digitalWrite(LED0, HIGH);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    delay(500);

    // Turn all LEDs off
    digitalWrite(LED0, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    delay(500);
}

void setup()
{
    // GPIO初期化
    pinMode(LED0, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);

    // UART初期化
    Serial.begin(115200);
    while (!Serial) {
        NOP();
    }
}

void loop()
{
    blink_led();

    Serial.println("Hello! Spresense CXD5602!");
}