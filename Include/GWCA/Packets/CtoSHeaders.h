#pragma once

constexpr unsigned short CtoGS_MSGDisconnect = 0x9;
constexpr unsigned short CtoGS_MSGRequestItems = 0x97;
constexpr unsigned short CtoGS_MSGRequestSpawn = 0x8D;
constexpr unsigned short CtoGS_MSGRequestAgents = 0x96;
constexpr unsigned short CtoGS_MSGCallTarget = 0x28;
constexpr unsigned short CtoGS_MSGGoNPC = 0x3F;
constexpr unsigned short CtoGS_MSGGoGadget = 0x57;
constexpr unsigned short CtoGS_MSGGoPlayer = 0x39;
constexpr unsigned short CtoGS_MSGPickUpItem = 0x45;
constexpr unsigned short CtoGS_MSGAttack = 0x2C;
constexpr unsigned short CtoGS_MSGCancelAction = 0x2E;
constexpr unsigned short CtoGS_MSGOpenChest = 0x59;
constexpr unsigned short CtoGS_MSGDropBuff = 0x2F;
constexpr unsigned short CtoGS_MSGDropItem = 0x32;
constexpr unsigned short CtoGS_MSGDropGold = 0x35;
constexpr unsigned short CtoGS_MSGEquipItem = 0x36;
constexpr unsigned short CtoGS_MSGDonateFaction = 0x3B;
constexpr unsigned short CtoGS_MSGDialog = 0x41;
constexpr unsigned short CtoGS_MSGMouseMove = 0x44;
constexpr unsigned short CtoGS_MSGUseSkill = 0x4C;
constexpr unsigned short CtoGS_MSGCallSkill = 0x2C;
constexpr unsigned short CtoGS_MSGSetSkillbarSkill = 0x62;
constexpr unsigned short CtoGS_MSGChangeSecondary = 0x47;
constexpr unsigned short CtoGS_MSGSetAttributes = 0x10;
constexpr unsigned short CtoGS_MSGLoadSkillbar = 0x63; // TODO
constexpr unsigned short CtoGS_MSGRequestQuote = 0x52;
constexpr unsigned short CtoGS_MSGTransactItem = 0x53;
constexpr unsigned short CtoGS_MSGTransactTrade = 0x50;
constexpr unsigned short CtoGS_MSGStartSalvage = 0x7D;
constexpr unsigned short CtoGS_MSGSalvageMaterials = 0x80;
constexpr unsigned short CtoGS_MSGSalvageMod = 0x81;
constexpr unsigned short CtoGS_MSGIdentifyItem = 0x71;
constexpr unsigned short CtoGS_MSGMoveItem = 0x78;
constexpr unsigned short CtoGS_MSGAcceptAllItems = 0x79; // Untested
constexpr unsigned short CtoGS_MSGUseItem = 0x84;
constexpr unsigned short CtoGS_MSGStartTrade = 0x4F;
constexpr unsigned short CtoGS_MSGAcknowledgeTrade = 0x0;
constexpr unsigned short CtoGS_MSGAcceptTrade = 0x7;
constexpr unsigned short CtoGS_MSGCancelTrade = 0x1;
constexpr unsigned short CtoGS_MSGAddItemTrade = 0x2;
constexpr unsigned short CtoGS_MSGRemoveItemTrade = 0x5;
constexpr unsigned short CtoGS_MSGChangeOffer = 0x6;
constexpr unsigned short CtoGS_MSGSubmitOffer = 0x3;
constexpr unsigned short CtoGS_MSGAddNpc = 0xA6;
constexpr unsigned short CtoGS_MSGKickNpc = 0xAF;
constexpr unsigned short CtoGS_MSGInvitePlayer = 0xA6;
constexpr unsigned short CtoGS_MSGInvitePlayerByName = 0xA7;
constexpr unsigned short CtoGS_MSGKickPlayer = 0xAF;
constexpr unsigned short CtoGS_MSGAcceptPartyRequest = 0xA3;
constexpr unsigned short CtoGS_MSGDenyPartyRequest = 0xA2;
constexpr unsigned short CtoGS_MSGEnterChallenge = 0xAC;
constexpr unsigned short CtoGS_MSGReturnToOutpost = 0xAE;
constexpr unsigned short CtoGS_MSGAbandonQuest = 0x12;
constexpr unsigned short CtoGS_MSGActivateQuest = 0x13;
constexpr unsigned short CtoGS_MSGRequestQuest = 0x16;
constexpr unsigned short CtoGS_MSGSetHeroAggression = 0x17;
constexpr unsigned short CtoGS_MSGLockHeroTarget = 0x18;
constexpr unsigned short CtoGS_MSGChangeHeroSkillSlotState = 0x1C;
constexpr unsigned short CtoGS_MSGCommandHero = 0x1E;
constexpr unsigned short CtoGS_MSGCommandAll = 0x1F;
constexpr unsigned short CtoGS_MSGAddHero = 0x23;
constexpr unsigned short CtoGS_MSGKickHero = 0x24;
constexpr unsigned short CtoGS_MSGPingWeaponSet = 0x2B;
constexpr unsigned short CtoGS_MSGTravelGH = 0xB7;
constexpr unsigned short CtoGS_MSGTravelTo = 0xB8;
constexpr unsigned short CtoGS_MSGLeaveGH = 0xB9;
constexpr unsigned short CtoGS_MSGSendChat = 0x6A;
constexpr unsigned short CtoGS_MSGSetDisplayedTitle = 0x5E;
constexpr unsigned short CtoGS_MSGRemoveDisplayedTitle = 0x5F;
constexpr unsigned short CtoGS_MSGSkipCinematic = 0x69;
constexpr unsigned short CtoGS_MSGUnlockSkillByTome = 0x72;
constexpr unsigned short CtoGS_MSGDeleteItem = 0x6E;
constexpr unsigned short CtoGS_MSGSplitStack = 0x7B;
constexpr unsigned short CtoGS_MSGChangeGold = 0x82;
constexpr unsigned short CtoGS_MSGSwitchMode = 0xA2;
constexpr unsigned short CtoGS_MSGLeaveParty = 0xA9;
constexpr unsigned short CtoGS_MSGTick = 0xB6;
constexpr unsigned short CtoGS_MSGDrawMap = 0x31;
