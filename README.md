# Spresense評価用F/W開発

Spresenseの評価用F/W個人開発リポジトリ  
CXD5602という化け物マルチコアマイコンをいじり倒す!  

---
## CXD5602

<!-- <div align="center">
  <img width="500" src="/doc/CXD5602/cxd5602_block_diagram.png">
</div> -->

- CPU
  - アプリ用 ... Arm Cortex-M4F x6コア
    - クロック ... 156 MHz
    - FPU ... 単精度
    - ROM ... 8 MB
    - SRAM ... 1.5 MB
  - SYS・I/O用 ... Arm Cortex-M0+ x1コア
    - クロック ... 100MHz
    - ROM ... 128 KB
    - SRAM ... 256 KB
  - GNSS DSP用 ... Arm Cortex-M4F x1コア
    - クロック ... 98.208MHz
    - FPU ... 単精度
    - ROM ... 64 KB
    - SRAM ... 640 KB

- 周辺機能
  - I2C ... x1 ＠400 KHz
  - I2S ... x1
  - SPI ... x2
  - UART ... x2
  - SDIO ... x1
  - eMMC ... x1
  - USB ... x1
  - DMA ... x2
  - GPIO ... x26
  - ADC ... x2
  - DMA ... x8
  - PWM ... x8
  - タイマ
    - 汎用タイマ ... x6
    - SysTick
  - WDT
  - RTC

## メイン基板(CXD5602PWBMAIN1)

- マイコン ... CXD5602
- LED ... 緑色 x4つ

---

## 参考文献一覧

- https://developer.sony.com/spresense/development-guides/introduction_ja.html
- https://developer.sony.com/spresense/development-guides/hw_docs_lte2_ja.html
- https://developer.sony.com/spresense/development-guides/hw_docs_ja.html
- https://www.switch-science.com/products/3900
- https://developer.sony.com/ja/spresense
- https://akizukidenshi.com/catalog/g/g114584/
