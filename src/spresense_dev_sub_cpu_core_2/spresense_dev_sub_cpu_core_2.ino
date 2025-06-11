/**
 * @brief SPRESENSEのArduinoIDEファイル
 * @author Chimipupu(https://github.com/Chimipupu)
 * @date 2025-06-11
 * @version 1.0
 * @note SPRESENSE サブCPUコア2用
 */

#include <MP.h> // MultiCore MPライブラリ
#ifndef SUBCORE
#error "You must select SubCore"
#endif

#include "mp_cpu.hpp"

#include <stdint.h>
#include <string.h>

// ARM Cortex-M4F用のNOP命令のマクロ
#define NOP() __asm__ __volatile__("nop")

void setup()
{
    // SubCPUコアの開始をMainCPUCoreへ応答
    mp_sub_cpu_core_begin_res();

    // GPIO初期化
    pinMode(LED1, OUTPUT);
}

void loop()
{
    MPLog("Spresense CXD5602 Sub CPU Core 2!\r\n");
    delay(1200);

    digitalWrite(LED1, HIGH);
    delay(500);

    digitalWrite(LED1, LOW);
    delay(500);
}