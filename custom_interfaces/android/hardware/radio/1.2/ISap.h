#ifndef HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_ISAP_H
#define HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_ISAP_H

#include <android/hardware/radio/1.1/ISap.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace radio {
namespace V1_2 {

struct ISap : public ::android::hardware::radio::V1_1::ISap {
    typedef android::hardware::details::i_tag _hidl_tag;

    // Forward declaration for forward reference support:

    /**
     * Empty top level interface.
     */
    virtual bool isRemote() const override { return false; }


    /**
     * Set callback that has response and unsolicited indication functions
     * 
     * @param sapCallback Object containing response and unosolicited indication callbacks
     */
    virtual ::android::hardware::Return<void> setCallback(const ::android::sp<::android::hardware::radio::V1_0::ISapCallback>& sapCallback) = 0;

    /**
     * CONNECT_REQ from SAP 1.1 spec 5.1.1
     * 
     * @param token Id to match req-resp. Resp must include same token.
     * @param maxMsgSize MaxMsgSize to be used for SIM Access Profile connection
     */
    virtual ::android::hardware::Return<void> connectReq(int32_t token, int32_t maxMsgSize) = 0;

    /**
     * DISCONNECT_REQ from SAP 1.1 spec 5.1.3
     * 
     * @param token Id to match req-resp. Resp must include same token.
     */
    virtual ::android::hardware::Return<void> disconnectReq(int32_t token) = 0;

    /**
     * TRANSFER_APDU_REQ from SAP 1.1 spec 5.1.6
     * 
     * @param token Id to match req-resp. Resp must include same token.
     * @param type APDU command type
     * @param command CommandAPDU/CommandAPDU7816 parameter depending on type
     */
    virtual ::android::hardware::Return<void> apduReq(int32_t token, ::android::hardware::radio::V1_0::SapApduType type, const ::android::hardware::hidl_vec<uint8_t>& command) = 0;

    /**
     * TRANSFER_ATR_REQ from SAP 1.1 spec 5.1.8
     * 
     * @param token Id to match req-resp. Resp must include same token.
     */
    virtual ::android::hardware::Return<void> transferAtrReq(int32_t token) = 0;

    /**
     * POWER_SIM_OFF_REQ and POWER_SIM_ON_REQ from SAP 1.1 spec 5.1.10 + 5.1.12
     * 
     * @param token Id to match req-resp. Resp must include same token.
     * @param state true for on, false for off
     */
    virtual ::android::hardware::Return<void> powerReq(int32_t token, bool state) = 0;

    /**
     * RESET_SIM_REQ from SAP 1.1 spec 5.1.14
     * 
     * @param token Id to match req-resp. Resp must include same token.
     */
    virtual ::android::hardware::Return<void> resetSimReq(int32_t token) = 0;

    /**
     * TRANSFER_CARD_READER_STATUS_REQ from SAP 1.1 spec 5.1.17
     * 
     * @param token Id to match req-resp. Resp must include same token.
     */
    virtual ::android::hardware::Return<void> transferCardReaderStatusReq(int32_t token) = 0;

    /**
     * SET_TRANSPORT_PROTOCOL_REQ from SAP 1.1 spec 5.1.20
     * 
     * @param token Id to match req-resp. Resp must include same token.
     * @param transferProtocol Transport Protocol
     */
    virtual ::android::hardware::Return<void> setTransferProtocolReq(int32_t token, ::android::hardware::radio::V1_0::SapTransferProtocol transferProtocol) = 0;

    using interfaceChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& descriptors)>;
    virtual ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;

    virtual ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;

    using interfaceDescriptor_cb = std::function<void(const ::android::hardware::hidl_string& descriptor)>;
    virtual ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;

    using getHashChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>& hashchain)>;
    virtual ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;

    virtual ::android::hardware::Return<void> setHALInstrumentation() override;

    virtual ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;

    virtual ::android::hardware::Return<void> ping() override;

    using getDebugInfo_cb = std::function<void(const ::android::hidl::base::V1_0::DebugInfo& info)>;
    virtual ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;

    virtual ::android::hardware::Return<void> notifySyspropsChanged() override;

    virtual ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;
    // cast static functions
    static ::android::hardware::Return<::android::sp<::android::hardware::radio::V1_2::ISap>> castFrom(const ::android::sp<::android::hardware::radio::V1_2::ISap>& parent, bool emitError = false);
    static ::android::hardware::Return<::android::sp<::android::hardware::radio::V1_2::ISap>> castFrom(const ::android::sp<::android::hardware::radio::V1_1::ISap>& parent, bool emitError = false);
    static ::android::hardware::Return<::android::sp<::android::hardware::radio::V1_2::ISap>> castFrom(const ::android::sp<::android::hardware::radio::V1_0::ISap>& parent, bool emitError = false);
    static ::android::hardware::Return<::android::sp<::android::hardware::radio::V1_2::ISap>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

    static const char* descriptor;

    static ::android::sp<ISap> tryGetService(const std::string &serviceName="default", bool getStub=false);
    static ::android::sp<ISap> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    static ::android::sp<ISap> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    static ::android::sp<ISap> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    static ::android::sp<ISap> getService(const std::string &serviceName="default", bool getStub=false);
    static ::android::sp<ISap> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    static ::android::sp<ISap> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    static ::android::sp<ISap> getService(bool getStub) { return getService("default", getStub); }
    __attribute__ ((warn_unused_result))::android::status_t registerAsService(const std::string &serviceName="default");
    static bool registerForNotifications(
            const std::string &serviceName,
            const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification);
};

static inline std::string toString(const ::android::sp<::android::hardware::radio::V1_2::ISap>& o) {
    std::string os = "[class or subclass of ";
    os += ::android::hardware::radio::V1_2::ISap::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}


}  // namespace V1_2
}  // namespace radio
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_2_ISAP_H
