# Spresense評価用F/W開発

Spresenseの評価用F/W個人開発リポジトリ  

---

## 実装機能💻️

<div align="center">
  <img width="300" src="/doc/img/spresense_mp_multi_core_cpu_com.png">
</div>

- **メインCPU👑**
  - Sub CPU Core 1～5の起動📢
- **Sub CPU Core 1**🚸
  - LED0のON/OFF💡
- **Sub CPU Core 2**🚸
  - LED1のON/OFF💡
- **Sub CPU Core 3**🚸
  - LED2のON/OFF💡
- **Sub CPU Core 4**🚸
  - LED3のON/OFF💡
- **Sub CPU Core 5**🚸
  - (TBD)

---

## CXD5602⚡️

この化け物マルチコアマイコンをいじり倒したい🥺  

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
  - ⚡️I2C ... x5
  - ⚡️I2S ... x2
  - ⚡️SPI ... x4
  - ⚡️UART ... x3
  - ⚡️SDIO ... x1
  - ⚡️eMMC ... x1
  - ⚡️USB ... x1
  - ⚡️DMA ... x2
  - ⚡️GPIO ... x26
  - ⚡️ADC
    - Low ... x4 10bit
    - High ... x2 10bit
  - ⚡️DMA ... x8
  - ⚡️PWM ... x8
  - ⏰️タイマ
    - 汎用タイマ ... x6
    - SysTick
  - ⏰️WDT
  - ⏰️RTC

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
