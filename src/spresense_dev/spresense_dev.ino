/**
 * @brief SPRESENSEのArduinoIDEファイル
 * @author Chimipupu(https://github.com/Chimipupu)
 * @date 2025-06-11
 * @version 1.0
 * @note SPRESENSE メインCPUコア用
 */

#include <MP.h> // MultiCore MPライブラリ
#ifdef SUBCORE
#error "You must select MainCore"
#endif

#include "mp_cpu.hpp"

#include <stdint.h>
#include <string.h>

// ARM Cortex-M4F用のNOP命令のマクロ
#define NOP() __asm__ __volatile__("nop")
#if 0
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
#endif

void setup()
{
    // サブCPUコアの開始
    mp_sub_cpu_core_begin();

    // GPIO初期化
    pinMode(LED0, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);

    // UART初期化
    Serial.begin(115200, SERIAL_8E1);
    while (!Serial) {
        NOP();
    }
}

void loop()
{
    MPLog("Spresense CXD5602 Main CPU Core!\r\n");
    delay(1000);
}