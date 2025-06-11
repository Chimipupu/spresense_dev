# Spresense評価用F/W開発

Spresenseの評価用F/W個人開発リポジトリ

---
## CXD5602

- CPU ... Arm Cortex-M4F x6コア
  - クロック ... 156MHz
  - FPU ... 単精度
- ROM ... 8MB
- SRAM ... 1.5MB

- 周辺機能
  - I2C
  - SPI
    - メインボード：1系統、最大13Mbps（1.8V）
    - 拡張ボード：1系統、最大39Mbps（5Vまたは3.3V）
  - UART
  - DMA
  - タイマ
    - 汎用タイマ（PWM出力対応、最大6.5MHz、15ビット分解能）
    - システムタイマ（割り込みや周期処理に利用）
  - WDT
  - RTC

---

## 参考文献一覧

- https://developer.sony.com/spresense/development-guides/introduction_ja.html
- https://developer.sony.com/spresense/development-guides/hw_docs_lte2_ja.html
- https://developer.sony.com/spresense/development-guides/hw_docs_ja.html
- https://www.switch-science.com/products/3900
- https://developer.sony.com/ja/spresense
- https://akizukidenshi.com/catalog/g/g114584/
