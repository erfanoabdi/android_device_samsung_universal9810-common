#ifndef HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_BSRADIOINDICATION_H
#define HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_BSRADIOINDICATION_H

#include <android-base/macros.h>
#include <cutils/trace.h>
#include <future>
#include <android/hardware/radio/1.2/IRadioIndication.h>

#include <hidl/HidlPassthroughSupport.h>
#include <hidl/TaskRunner.h>
namespace android {
namespace hardware {
namespace radio {
namespace V1_2 {

struct BsRadioIndication : IRadioIndication, ::android::hardware::details::HidlInstrumentor {
    explicit BsRadioIndication(const ::android::sp<IRadioIndication> impl);

    typedef IRadioIndication Pure;

    typedef android::hardware::details::bs_tag _hidl_tag;

    // Methods from ::android::hardware::radio::V1_0::IRadioIndication follow.
    ::android::hardware::Return<void> radioStateChanged(::android::hardware::radio::V1_0::RadioIndicationType type, ::android::hardware::radio::V1_0::RadioState radioState) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::radioStateChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&radioState);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "radioStateChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, radioState] {
            mImpl->radioStateChanged(type, radioState);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "radioStateChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> callStateChanged(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::callStateChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "callStateChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->callStateChanged(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "callStateChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> networkStateChanged(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::networkStateChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "networkStateChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->networkStateChanged(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "networkStateChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> newSms(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<uint8_t>& pdu) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::newSms::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&pdu);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "newSms", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, pdu] {
            mImpl->newSms(type, pdu);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "newSms", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> newSmsStatusReport(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<uint8_t>& pdu) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::newSmsStatusReport::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&pdu);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "newSmsStatusReport", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, pdu] {
            mImpl->newSmsStatusReport(type, pdu);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "newSmsStatusReport", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> newSmsOnSim(::android::hardware::radio::V1_0::RadioIndicationType type, int32_t recordNumber) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::newSmsOnSim::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&recordNumber);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "newSmsOnSim", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, recordNumber] {
            mImpl->newSmsOnSim(type, recordNumber);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "newSmsOnSim", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> onUssd(::android::hardware::radio::V1_0::RadioIndicationType type, ::android::hardware::radio::V1_0::UssdModeType modeType, const ::android::hardware::hidl_string& msg) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::onUssd::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&modeType);
            _hidl_args.push_back((void *)&msg);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "onUssd", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, modeType, msg] {
            mImpl->onUssd(type, modeType, msg);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "onUssd", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> nitzTimeReceived(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_string& nitzTime, uint64_t receivedTime) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::nitzTimeReceived::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&nitzTime);
            _hidl_args.push_back((void *)&receivedTime);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "nitzTimeReceived", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, nitzTime, receivedTime] {
            mImpl->nitzTimeReceived(type, nitzTime, receivedTime);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "nitzTimeReceived", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> currentSignalStrength(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::SignalStrength& signalStrength) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::currentSignalStrength::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&signalStrength);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "currentSignalStrength", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, signalStrength] {
            mImpl->currentSignalStrength(type, signalStrength);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "currentSignalStrength", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> dataCallListChanged(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<::android::hardware::radio::V1_0::SetupDataCallResult>& dcList) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::dataCallListChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&dcList);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "dataCallListChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, dcList] {
            mImpl->dataCallListChanged(type, dcList);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "dataCallListChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> suppSvcNotify(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::SuppSvcNotification& suppSvc) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::suppSvcNotify::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&suppSvc);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "suppSvcNotify", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, suppSvc] {
            mImpl->suppSvcNotify(type, suppSvc);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "suppSvcNotify", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> stkSessionEnd(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::stkSessionEnd::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "stkSessionEnd", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->stkSessionEnd(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "stkSessionEnd", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> stkProactiveCommand(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_string& cmd) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::stkProactiveCommand::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&cmd);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "stkProactiveCommand", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, cmd] {
            mImpl->stkProactiveCommand(type, cmd);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "stkProactiveCommand", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> stkEventNotify(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_string& cmd) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::stkEventNotify::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&cmd);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "stkEventNotify", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, cmd] {
            mImpl->stkEventNotify(type, cmd);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "stkEventNotify", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> stkCallSetup(::android::hardware::radio::V1_0::RadioIndicationType type, int64_t timeout) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::stkCallSetup::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&timeout);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "stkCallSetup", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, timeout] {
            mImpl->stkCallSetup(type, timeout);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "stkCallSetup", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> simSmsStorageFull(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::simSmsStorageFull::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "simSmsStorageFull", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->simSmsStorageFull(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "simSmsStorageFull", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> simRefresh(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::SimRefreshResult& refreshResult) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::simRefresh::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&refreshResult);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "simRefresh", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, refreshResult] {
            mImpl->simRefresh(type, refreshResult);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "simRefresh", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> callRing(::android::hardware::radio::V1_0::RadioIndicationType type, bool isGsm, const ::android::hardware::radio::V1_0::CdmaSignalInfoRecord& record) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::callRing::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&isGsm);
            _hidl_args.push_back((void *)&record);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "callRing", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, isGsm, record] {
            mImpl->callRing(type, isGsm, record);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "callRing", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> simStatusChanged(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::simStatusChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "simStatusChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->simStatusChanged(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "simStatusChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cdmaNewSms(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::CdmaSmsMessage& msg) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cdmaNewSms::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&msg);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaNewSms", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, msg] {
            mImpl->cdmaNewSms(type, msg);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaNewSms", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> newBroadcastSms(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<uint8_t>& data) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::newBroadcastSms::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&data);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "newBroadcastSms", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, data] {
            mImpl->newBroadcastSms(type, data);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "newBroadcastSms", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cdmaRuimSmsStorageFull(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cdmaRuimSmsStorageFull::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaRuimSmsStorageFull", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->cdmaRuimSmsStorageFull(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaRuimSmsStorageFull", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> restrictedStateChanged(::android::hardware::radio::V1_0::RadioIndicationType type, ::android::hardware::radio::V1_0::PhoneRestrictedState state) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::restrictedStateChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&state);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "restrictedStateChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, state] {
            mImpl->restrictedStateChanged(type, state);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "restrictedStateChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> enterEmergencyCallbackMode(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::enterEmergencyCallbackMode::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "enterEmergencyCallbackMode", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->enterEmergencyCallbackMode(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "enterEmergencyCallbackMode", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cdmaCallWaiting(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::CdmaCallWaiting& callWaitingRecord) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cdmaCallWaiting::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&callWaitingRecord);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaCallWaiting", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, callWaitingRecord] {
            mImpl->cdmaCallWaiting(type, callWaitingRecord);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaCallWaiting", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cdmaOtaProvisionStatus(::android::hardware::radio::V1_0::RadioIndicationType type, ::android::hardware::radio::V1_0::CdmaOtaProvisionStatus status) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cdmaOtaProvisionStatus::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaOtaProvisionStatus", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, status] {
            mImpl->cdmaOtaProvisionStatus(type, status);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaOtaProvisionStatus", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cdmaInfoRec(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::CdmaInformationRecords& records) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cdmaInfoRec::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&records);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaInfoRec", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, records] {
            mImpl->cdmaInfoRec(type, records);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaInfoRec", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> indicateRingbackTone(::android::hardware::radio::V1_0::RadioIndicationType type, bool start) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::indicateRingbackTone::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&start);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "indicateRingbackTone", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, start] {
            mImpl->indicateRingbackTone(type, start);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "indicateRingbackTone", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> resendIncallMute(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::resendIncallMute::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "resendIncallMute", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->resendIncallMute(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "resendIncallMute", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cdmaSubscriptionSourceChanged(::android::hardware::radio::V1_0::RadioIndicationType type, ::android::hardware::radio::V1_0::CdmaSubscriptionSource cdmaSource) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cdmaSubscriptionSourceChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&cdmaSource);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaSubscriptionSourceChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, cdmaSource] {
            mImpl->cdmaSubscriptionSourceChanged(type, cdmaSource);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaSubscriptionSourceChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cdmaPrlChanged(::android::hardware::radio::V1_0::RadioIndicationType type, int32_t version) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cdmaPrlChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&version);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaPrlChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, version] {
            mImpl->cdmaPrlChanged(type, version);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cdmaPrlChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> exitEmergencyCallbackMode(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::exitEmergencyCallbackMode::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "exitEmergencyCallbackMode", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->exitEmergencyCallbackMode(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "exitEmergencyCallbackMode", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> rilConnected(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::rilConnected::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "rilConnected", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->rilConnected(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "rilConnected", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> voiceRadioTechChanged(::android::hardware::radio::V1_0::RadioIndicationType type, ::android::hardware::radio::V1_0::RadioTechnology rat) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::voiceRadioTechChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&rat);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "voiceRadioTechChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, rat] {
            mImpl->voiceRadioTechChanged(type, rat);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "voiceRadioTechChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cellInfoList(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<::android::hardware::radio::V1_0::CellInfo>& records) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cellInfoList::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&records);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cellInfoList", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, records] {
            mImpl->cellInfoList(type, records);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cellInfoList", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> imsNetworkStateChanged(::android::hardware::radio::V1_0::RadioIndicationType type) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::imsNetworkStateChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "imsNetworkStateChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type] {
            mImpl->imsNetworkStateChanged(type);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "imsNetworkStateChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> subscriptionStatusChanged(::android::hardware::radio::V1_0::RadioIndicationType type, bool activate) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::subscriptionStatusChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&activate);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "subscriptionStatusChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, activate] {
            mImpl->subscriptionStatusChanged(type, activate);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "subscriptionStatusChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> srvccStateNotify(::android::hardware::radio::V1_0::RadioIndicationType type, ::android::hardware::radio::V1_0::SrvccState state) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::srvccStateNotify::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&state);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "srvccStateNotify", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, state] {
            mImpl->srvccStateNotify(type, state);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "srvccStateNotify", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> hardwareConfigChanged(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<::android::hardware::radio::V1_0::HardwareConfig>& configs) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::hardwareConfigChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&configs);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "hardwareConfigChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, configs] {
            mImpl->hardwareConfigChanged(type, configs);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "hardwareConfigChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> radioCapabilityIndication(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::RadioCapability& rc) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::radioCapabilityIndication::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&rc);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "radioCapabilityIndication", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, rc] {
            mImpl->radioCapabilityIndication(type, rc);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "radioCapabilityIndication", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> onSupplementaryServiceIndication(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::StkCcUnsolSsResult& ss) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::onSupplementaryServiceIndication::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&ss);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "onSupplementaryServiceIndication", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, ss] {
            mImpl->onSupplementaryServiceIndication(type, ss);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "onSupplementaryServiceIndication", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> stkCallControlAlphaNotify(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_string& alpha) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::stkCallControlAlphaNotify::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&alpha);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "stkCallControlAlphaNotify", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, alpha] {
            mImpl->stkCallControlAlphaNotify(type, alpha);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "stkCallControlAlphaNotify", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> lceData(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::LceDataInfo& lce) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::lceData::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&lce);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "lceData", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, lce] {
            mImpl->lceData(type, lce);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "lceData", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> pcoData(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_0::PcoDataInfo& pco) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::pcoData::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&pco);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "pcoData", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, pco] {
            mImpl->pcoData(type, pco);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "pcoData", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> modemReset(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_string& reason) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::modemReset::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&reason);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "modemReset", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, reason] {
            mImpl->modemReset(type, reason);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "modemReset", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }

    // Methods from ::android::hardware::radio::V1_1::IRadioIndication follow.
    ::android::hardware::Return<void> carrierInfoForImsiEncryption(::android::hardware::radio::V1_0::RadioIndicationType info) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::carrierInfoForImsiEncryption::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&info);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "carrierInfoForImsiEncryption", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , info] {
            mImpl->carrierInfoForImsiEncryption(info);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "carrierInfoForImsiEncryption", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> networkScanResult(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_1::NetworkScanResult& result) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::networkScanResult::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&result);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "networkScanResult", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, result] {
            mImpl->networkScanResult(type, result);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "networkScanResult", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> keepaliveStatus(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_1::KeepaliveStatus& status) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::keepaliveStatus::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "keepaliveStatus", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, status] {
            mImpl->keepaliveStatus(type, status);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "keepaliveStatus", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }

    // Methods from ::android::hardware::radio::V1_2::IRadioIndication follow.
    ::android::hardware::Return<void> networkScanResult_1_2(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_2::NetworkScanResult& result) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::networkScanResult_1_2::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&result);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "networkScanResult_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, result] {
            mImpl->networkScanResult_1_2(type, result);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "networkScanResult_1_2", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> cellInfoList_1_2(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<::android::hardware::radio::V1_2::CellInfo>& records) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::cellInfoList_1_2::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&records);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "cellInfoList_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, records] {
            mImpl->cellInfoList_1_2(type, records);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "cellInfoList_1_2", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> currentLinkCapacityEstimate(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_2::LinkCapacityEstimate& lce) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::currentLinkCapacityEstimate::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&lce);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "currentLinkCapacityEstimate", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, lce] {
            mImpl->currentLinkCapacityEstimate(type, lce);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "currentLinkCapacityEstimate", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> currentPhysicalChannelConfigs(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::hidl_vec<::android::hardware::radio::V1_2::PhysicalChannelConfig>& configs) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::currentPhysicalChannelConfigs::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&configs);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "currentPhysicalChannelConfigs", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, configs] {
            mImpl->currentPhysicalChannelConfigs(type, configs);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "currentPhysicalChannelConfigs", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> currentSignalStrength_1_2(::android::hardware::radio::V1_0::RadioIndicationType type, const ::android::hardware::radio::V1_2::SignalStrength& signalStrength) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::currentSignalStrength_1_2::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&type);
            _hidl_args.push_back((void *)&signalStrength);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "currentSignalStrength_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        , type, signalStrength] {
            mImpl->currentSignalStrength_1_2(type, signalStrength);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "currentSignalStrength_1_2", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::interfaceChain::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "interfaceChain", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->interfaceChain([&](const auto &_hidl_out_descriptors) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptors);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "interfaceChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_descriptors);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::debug::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&fd);
            _hidl_args.push_back((void *)&options);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "debug", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->debug(fd, options);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "debug", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::interfaceDescriptor::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "interfaceDescriptor", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->interfaceDescriptor([&](const auto &_hidl_out_descriptor) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptor);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "interfaceDescriptor", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_descriptor);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::getHashChain::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "getHashChain", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getHashChain([&](const auto &_hidl_out_hashchain) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_hashchain);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "getHashChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_hashchain);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> setHALInstrumentation() {
        configureInstrumentation();
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::linkToDeath::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            _hidl_args.push_back((void *)&cookie);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "linkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->linkToDeath(recipient, cookie);

        #ifdef __ANDROID_DEBUGGABLE__
        bool _hidl_out_success = _hidl_return;
        #endif // __ANDROID_DEBUGGABLE__
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "linkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }
    ::android::hardware::Return<void> ping() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::ping::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "ping", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->ping();

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "ping", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::getDebugInfo::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "getDebugInfo", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getDebugInfo([&](const auto &_hidl_out_info) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_info);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "getDebugInfo", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_info);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> notifySyspropsChanged() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::notifySyspropsChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "notifySyspropsChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "notifySyspropsChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IRadioIndication::unlinkToDeath::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.radio", "1.2", "IRadioIndication", "unlinkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->unlinkToDeath(recipient);

        #ifdef __ANDROID_DEBUGGABLE__
        bool _hidl_out_success = _hidl_return;
        #endif // __ANDROID_DEBUGGABLE__
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.radio", "1.2", "IRadioIndication", "unlinkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }

private:
    const ::android::sp<IRadioIndication> mImpl;
    ::android::hardware::details::TaskRunner mOnewayQueue;

    ::android::hardware::Return<void> addOnewayTask(std::function<void(void)>);

};

}  // namespace V1_2
}  // namespace radio
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_BSRADIOINDICATION_H
