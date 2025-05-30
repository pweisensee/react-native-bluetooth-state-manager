///
/// JBluetoothState.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "BluetoothState.hpp"

namespace margelo::nitro::bluetoothstatemanager {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "BluetoothState" and the the Kotlin enum "BluetoothState".
   */
  struct JBluetoothState final: public jni::JavaClass<JBluetoothState> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/bluetoothstatemanager/BluetoothState;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum BluetoothState.
     */
    [[maybe_unused]]
    [[nodiscard]]
    BluetoothState toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("_ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<BluetoothState>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JBluetoothState> fromCpp(BluetoothState value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldPOWEREDON = clazz->getStaticField<JBluetoothState>("POWEREDON");
      static const auto fieldPOWEREDOFF = clazz->getStaticField<JBluetoothState>("POWEREDOFF");
      static const auto fieldUNAUTHORIZED = clazz->getStaticField<JBluetoothState>("UNAUTHORIZED");
      static const auto fieldUNSUPPORTED = clazz->getStaticField<JBluetoothState>("UNSUPPORTED");
      static const auto fieldRESETTING = clazz->getStaticField<JBluetoothState>("RESETTING");
      static const auto fieldUNKNOWN = clazz->getStaticField<JBluetoothState>("UNKNOWN");
      
      switch (value) {
        case BluetoothState::POWEREDON:
          return clazz->getStaticFieldValue(fieldPOWEREDON);
        case BluetoothState::POWEREDOFF:
          return clazz->getStaticFieldValue(fieldPOWEREDOFF);
        case BluetoothState::UNAUTHORIZED:
          return clazz->getStaticFieldValue(fieldUNAUTHORIZED);
        case BluetoothState::UNSUPPORTED:
          return clazz->getStaticFieldValue(fieldUNSUPPORTED);
        case BluetoothState::RESETTING:
          return clazz->getStaticFieldValue(fieldRESETTING);
        case BluetoothState::UNKNOWN:
          return clazz->getStaticFieldValue(fieldUNKNOWN);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::bluetoothstatemanager
