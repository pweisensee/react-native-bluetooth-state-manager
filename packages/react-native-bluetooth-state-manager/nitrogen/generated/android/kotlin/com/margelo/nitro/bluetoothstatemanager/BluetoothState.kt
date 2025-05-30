///
/// BluetoothState.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.bluetoothstatemanager

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip

/**
 * Represents the JavaScript enum/union "BluetoothState".
 */
@DoNotStrip
@Keep
enum class BluetoothState {
  POWEREDON,
  POWEREDOFF,
  UNAUTHORIZED,
  UNSUPPORTED,
  RESETTING,
  UNKNOWN;

  @DoNotStrip
  @Keep
  private val _ordinal = ordinal
}
