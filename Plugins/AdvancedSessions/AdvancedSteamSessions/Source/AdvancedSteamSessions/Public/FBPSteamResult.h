#pragma once
#include "CoreMinimal.h"
#include "FBPSteamResult.generated.h"

UENUM(BlueprintType)
enum class FBPSteamResult : uint8 {
    K_EResultInvalid,
    k_EResultOK,
    k_EResultFail,
    k_EResultNoConnection,
    k_EResultInvalidPassword = 5,
    k_EResultLoggedInElsewhere,
    k_EResultInvalidProtocolVer,
    k_EResultInvalidParam,
    k_EResultFileNotFound,
    k_EResultBusy,
    k_EResultInvalidState,
    k_EResultInvalidName,
    k_EResultInvalidEmail,
    k_EResultDuplicateName,
    k_EResultAccessDenied,
    k_EResultTimeout,
    k_EResultBanned,
    k_EResultAccountNotFound,
    k_EResultInvalidSteamID,
    k_EResultServiceUnavailable,
    k_EResultNotLoggedOn,
    k_EResultPending,
    k_EResultEncryptionFailure,
    k_EResultInsufficientPrivilege,
    k_EResultLimitExceeded,
    k_EResultRevoked,
    k_EResultExpired,
    k_EResultAlreadyRedeemed,
    k_EResultDuplicateRequest,
    k_EResultAlreadyOwned,
    k_EResultIPNotFound,
    k_EResultPersistFailed,
    k_EResultLockingFailed,
    k_EResultLogonSessionReplaced,
    k_EResultConnectFailed,
    k_EResultHandshakeFailed,
    k_EResultIOFailure,
    k_EResultRemoteDisconnect,
    k_EResultShoppingCartNotFound,
    k_EResultBlocked,
    k_EResultIgnored,
    k_EResultNoMatch,
    k_EResultAccountDisabled,
    k_EResultServiceReadOnly,
    k_EResultAccountNotFeatured,
    k_EResultAdministratorOK,
    k_EResultContentVersion,
    k_EResultTryAnotherCM,
    k_EResultPasswordRequiredToKickSession,
    k_EResultAlreadyLoggedInElsewhere,
    k_EResultSuspended,
    k_EResultCancelled,
    k_EResultDataCorruption,
    k_EResultDiskFull,
    k_EResultRemoteCallFailed,
    k_EResultPasswordUnset,
    k_EResultExternalAccountUnlinked,
    k_EResultPSNTicketInvalid,
    k_EResultExternalAccountAlreadyLinked,
    k_EResultRemoteFileConflict,
    k_EResultIllegalPassword,
    k_EResultSameAsPreviousValue,
    k_EResultAccountLogonDenied,
    k_EResultCannotUseOldPassword,
    k_EResultInvalidLoginAuthCode,
    k_EResultAccountLogonDeniedNoMail,
    k_EResultHardwareNotCapableOfIPT,
    k_EResultIPTInitError,
    k_EResultParentalControlRestricted,
    k_EResultFacebookQueryError,
    k_EResultExpiredLoginAuthCode,
    k_EResultIPLoginRestrictionFailed,
    k_EResultAccountLockedDown,
    k_EResultAccountLogonDeniedVerifiedEmailRequired,
    k_EResultNoMatchingURL,
    k_EResultBadResponse,
    k_EResultRequirePasswordReEntry,
    k_EResultValueOutOfRange,
    k_EResultUnexpectedError,
    k_EResultDisabled,
    k_EResultInvalidCEGSubmission,
    k_EResultRestrictedDevice,
    k_EResultRegionLocked,
    k_EResultRateLimitExceeded,
    k_EResultAccountLoginDeniedNeedTwoFactor,
    k_EResultItemDeleted,
    k_EResultAccountLoginDeniedThrottle,
    k_EResultTwoFactorCodeMismatch,
    k_EResultTwoFactorActivationCodeMismatch,
    k_EResultAccountAssociatedToMultiplePartners,
    k_EResultNotModified,
};
