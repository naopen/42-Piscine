#!/bin/bash

# 変数FT_NBR1 と変数FT_NBR2の合計を標準出力する
echo $FT_NBR1 + $FT_NBR2 |

# FT_NBR1の数値変換
sed "s/'/0/g" | tr '\\"?!' 1234 |

# FT_NBR2の数値変換
tr mrdoc 01234 |

# 13進数を使用して出力し、5進数を使用して入力、を指示（obase・ibase）し、計算
xargs echo 'obase=13; ibase=5;' | bc |

# 「gtaio luSnemf」の数値変換
tr 0123456789ABC 'gtaio luSnemf'