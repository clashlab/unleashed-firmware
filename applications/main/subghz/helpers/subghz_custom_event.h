#pragma once

typedef enum {
    SubGhzCustomEventManagerNoSet = 0,
    SubGhzCustomEventManagerSet,
    SubGhzCustomEventManagerSetRAW,

    //SubmenuIndex
    SubmenuIndexFaacSLH_433,
    SubmenuIndexFaacSLH_868,
    SubmenuIndexBFT,
    SubmenuIndexPricenton,
    SubmenuIndexNiceFlo12bit,
    SubmenuIndexNiceFlo24bit,
    SubmenuIndexNiceFlorS_433_92,
    SubmenuIndexNiceSmilo_433_92,
    SubmenuIndexCAME12bit,
    SubmenuIndexCAME24bit,
    SubmenuIndexBETT_433,
    SubmenuIndexCAMETwee,
    SubmenuIndexNeroSketch,
    SubmenuIndexNeroRadio,
    SubmenuIndexGateTX,
    SubmenuIndexDoorHan_315_00,
    SubmenuIndexDoorHan_433_92,
    SubmenuIndexLinear_300_00,
    SubmenuIndexLiftMaster_315_00,
    SubmenuIndexLiftMaster_390_00,
    SubmenuIndexLiftMaster_433_00,
    SubmenuIndexSecPlus_v2_310_00,
    SubmenuIndexSecPlus_v2_315_00,
    SubmenuIndexSecPlus_v2_390_00,
    SubmenuIndexSecPlus_v2_433_00,

    //SubGhzCustomEvent
    SubGhzCustomEventSceneDeleteSuccess = 100,
    SubGhzCustomEventSceneDelete,
    SubGhzCustomEventSceneDeleteRAW,
    SubGhzCustomEventSceneDeleteRAWBack,

    SubGhzCustomEventSceneReceiverInfoTxStart,
    SubGhzCustomEventSceneReceiverInfoTxStop,
    SubGhzCustomEventSceneReceiverInfoSave,
    SubGhzCustomEventSceneSaveName,
    SubGhzCustomEventSceneSaveSuccess,
    SubGhzCustomEventSceneShowErrorBack,
    SubGhzCustomEventSceneShowErrorOk,
    SubGhzCustomEventSceneShowErrorSub,
    SubGhzCustomEventSceneShowOnlyRX,
    SubGhzCustomEventSceneAnalyzerLock,
    SubGhzCustomEventSceneAnalyzerUnlock,
    SubGhzCustomEventSceneSettingLock,

    SubGhzCustomEventSceneExit,
    SubGhzCustomEventSceneStay,

    SubGhzCustomEventSceneRpcLoad,
    SubGhzCustomEventSceneRpcButtonPress,
    SubGhzCustomEventSceneRpcButtonRelease,
    SubGhzCustomEventSceneRpcSessionClose,

    SubGhzCustomEventViewReceiverOK,
    SubGhzCustomEventViewReceiverConfig,
    SubGhzCustomEventViewReceiverBack,
    SubGhzCustomEventViewReceiverOffDisplay,
    SubGhzCustomEventViewReceiverUnlock,
    SubGhzCustomEventViewReceiverDeleteItem,

    SubGhzCustomEventViewReadRAWBack,
    SubGhzCustomEventViewReadRAWIDLE,
    SubGhzCustomEventViewReadRAWREC,
    SubGhzCustomEventViewReadRAWConfig,
    SubGhzCustomEventViewReadRAWErase,
    SubGhzCustomEventViewReadRAWSendStart,
    SubGhzCustomEventViewReadRAWSendStop,
    SubGhzCustomEventViewReadRAWSave,
    SubGhzCustomEventViewReadRAWTXRXStop,
    SubGhzCustomEventViewReadRAWMore,

    SubGhzCustomEventViewTransmitterBack,
    SubGhzCustomEventViewTransmitterSendStart,
    SubGhzCustomEventViewTransmitterSendStop,
    SubGhzCustomEventViewTransmitterError,

    SubGhzCustomEventByteInputDone,
} SubGhzCustomEvent;
