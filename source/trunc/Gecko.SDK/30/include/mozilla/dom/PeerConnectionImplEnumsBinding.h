/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_PeerConnectionImplEnumsBinding_h__
#define mozilla_dom_PeerConnectionImplEnumsBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(PCImplReadyState, uint32_t)
  New,
  Negotiating,
  Active,
  Closing,
  Closed
MOZ_END_ENUM_CLASS(PCImplReadyState)

namespace PCImplReadyStateValues {
extern const EnumEntry strings[6];
} // namespace PCImplReadyStateValues



MOZ_BEGIN_ENUM_CLASS(PCImplSignalingState, uint32_t)
  SignalingInvalid,
  SignalingStable,
  SignalingHaveLocalOffer,
  SignalingHaveRemoteOffer,
  SignalingHaveLocalPranswer,
  SignalingHaveRemotePranswer,
  SignalingClosed
MOZ_END_ENUM_CLASS(PCImplSignalingState)

namespace PCImplSignalingStateValues {
extern const EnumEntry strings[8];
} // namespace PCImplSignalingStateValues



MOZ_BEGIN_ENUM_CLASS(PCImplSipccState, uint32_t)
  Idle,
  Starting,
  Started
MOZ_END_ENUM_CLASS(PCImplSipccState)

namespace PCImplSipccStateValues {
extern const EnumEntry strings[4];
} // namespace PCImplSipccStateValues



MOZ_BEGIN_ENUM_CLASS(PCImplIceConnectionState, uint32_t)
  New,
  Checking,
  Connected,
  Completed,
  Failed,
  Disconnected,
  Closed
MOZ_END_ENUM_CLASS(PCImplIceConnectionState)

namespace PCImplIceConnectionStateValues {
extern const EnumEntry strings[8];
} // namespace PCImplIceConnectionStateValues



MOZ_BEGIN_ENUM_CLASS(PCImplIceGatheringState, uint32_t)
  New,
  Gathering,
  Complete
MOZ_END_ENUM_CLASS(PCImplIceGatheringState)

namespace PCImplIceGatheringStateValues {
extern const EnumEntry strings[4];
} // namespace PCImplIceGatheringStateValues


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_PeerConnectionImplEnumsBinding_h__
