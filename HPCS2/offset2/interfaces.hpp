/*
 * Created using https://github.com/a2x/cs2-dumper
 * Wed, 22 Nov 2023 19:35:53 +0000
 */

#pragma once

#include <cstddef>

namespace animationsystem_dll { // animationsystem.dll
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64670;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5F1D0;
}

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x89C960;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x88B670;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x7A3990;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x72F780;
    constexpr std::ptrdiff_t Source2Client002 = 0x72F7A0;
    constexpr std::ptrdiff_t GameClientExports001 = 0x72F790;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x48FD90;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x476CD0;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1E4700;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1DA350;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1D6990;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1D4190;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1CF830;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1CF820;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1CB510;
    constexpr std::ptrdiff_t VProfService_001 = 0x1B8E80;
    constexpr std::ptrdiff_t ToolService_001 = 0x1B7BD0;
    constexpr std::ptrdiff_t StatsService_001 = 0x1B2E50;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1B00C0;
    constexpr std::ptrdiff_t SoundService_001 = 0x1AAC00;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1A6AD0;
    constexpr std::ptrdiff_t RenderService_001 = 0x1A3E30;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1A3940;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19E7F0;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x19A2E0;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x193F70;
    constexpr std::ptrdiff_t MapListService_001 = 0x18CF40;
    constexpr std::ptrdiff_t InputService_001 = 0x17ABB0;
    constexpr std::ptrdiff_t GameUIService_001 = 0x1753D0;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x173130;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x173120;
    constexpr std::ptrdiff_t BugService001 = 0x16C150;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x16A920;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x118430;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x1177C0;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xE6E20;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA2410;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8B6F0;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x841D0;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5A990;
}

namespace filesystem_stdio_dll { // filesystem_stdio.dll
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x66D30;
    constexpr std::ptrdiff_t VFileSystem017 = 0x66D20;
}

namespace host_dll { // host.dll
    constexpr std::ptrdiff_t Source2Host001 = 0x18E10;
    constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x18A90;
    constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x18A80;
    constexpr std::ptrdiff_t PredictionDiffManager001 = 0x16E20;
    constexpr std::ptrdiff_t HostUtils001 = 0x12550;
    constexpr std::ptrdiff_t GameSystem2HostHook = 0x11DA0;
    constexpr std::ptrdiff_t GameModelInfo001 = 0x11CC0;
    constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x11710;
}

namespace imemanager_dll { // imemanager.dll
    constexpr std::ptrdiff_t IMEManager001 = 0xC470;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t InputSystemVersion001 = 0x28D0;
    constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x16F0;
}

namespace localize_dll { // localize.dll
    constexpr std::ptrdiff_t Localize_001 = 0x3830;
}

namespace matchmaking_dll { // matchmaking.dll
    constexpr std::ptrdiff_t GameTypes001 = 0x50270;
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x1012B0;
}

namespace materialsystem2_dll { // materialsystem2.dll
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4DB90;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4A2E0;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x42A60;
    constexpr std::ptrdiff_t FontManager_001 = 0x37900;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25EC0;
}

namespace meshsystem_dll { // meshsystem.dll
    constexpr std::ptrdiff_t MeshSystem001 = 0x7270;
}

namespace navsystem_dll { // navsystem.dll
    constexpr std::ptrdiff_t NavSystem001 = 0x76F0;
}

namespace networksystem_dll { // networksystem.dll
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD1EB0;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBC6E0;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9C6D0;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7C440;
}

namespace panorama_dll { // panorama.dll
    constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x57EE0;
}

namespace panorama_text_pango_dll { // panorama_text_pango.dll
    constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4CBD0;
}

namespace panoramauiclient_dll { // panoramauiclient.dll
    constexpr std::ptrdiff_t PanoramaUIClient001 = 0x12780;
}

namespace particles_dll { // particles.dll
    constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x52D20;
}

namespace pulse_system_dll { // pulse_system.dll
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x5B30;
}

namespace rendersystemdx11_dll { // rendersystemdx11.dll
    constexpr std::ptrdiff_t RenderUtils_001 = 0x530F0;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4A690;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4A680;
}

namespace resourcesystem_dll { // resourcesystem.dll
    constexpr std::ptrdiff_t ResourceSystem013 = 0x10650;
}

namespace scenefilecache_dll { // scenefilecache.dll
    constexpr std::ptrdiff_t SceneFileCache002 = 0x68E0;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3190;
}

namespace scenesystem_dll { // scenesystem.dll
    constexpr std::ptrdiff_t SceneUtils_001 = 0x13C9E0;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xCAA30;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8E8A0;
}

namespace schemasystem_dll { // schemasystem.dll
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xA930;
}

namespace server_dll { // server.dll
    constexpr std::ptrdiff_t NavGameTest001 = 0xA3A970;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x83D770;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x83D780;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x83D790;
    constexpr std::ptrdiff_t Source2Server001 = 0x83D7A0;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x591C00;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x571B30;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2D08A0;
    constexpr std::ptrdiff_t customnavsystem001 = 0x24D620;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x1453E0;
}

namespace soundsystem_dll { // soundsystem.dll
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x1567E0;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x8BBC0;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x71740;
    constexpr std::ptrdiff_t SoundSystem001 = 0x46540;
}

namespace steamaudio_dll { // steamaudio.dll
    constexpr std::ptrdiff_t SteamAudio001 = 0x12EE0;
}

namespace steamclient64_dll { // steamclient64.dll
    constexpr std::ptrdiff_t IVALIDATE001 = 0x84FD80;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x84BC30;
    constexpr std::ptrdiff_t SteamClient021 = 0x6460C0;
    constexpr std::ptrdiff_t SteamClient020 = 0x6460B0;
    constexpr std::ptrdiff_t SteamClient019 = 0x6460A0;
    constexpr std::ptrdiff_t SteamClient018 = 0x646090;
    constexpr std::ptrdiff_t SteamClient017 = 0x646080;
    constexpr std::ptrdiff_t SteamClient016 = 0x646070;
    constexpr std::ptrdiff_t SteamClient015 = 0x646060;
    constexpr std::ptrdiff_t SteamClient014 = 0x646050;
    constexpr std::ptrdiff_t SteamClient013 = 0x646040;
    constexpr std::ptrdiff_t SteamClient012 = 0x646030;
    constexpr std::ptrdiff_t SteamClient011 = 0x646020;
    constexpr std::ptrdiff_t SteamClient010 = 0x646010;
    constexpr std::ptrdiff_t SteamClient009 = 0x646000;
    constexpr std::ptrdiff_t SteamClient008 = 0x645FF0;
    constexpr std::ptrdiff_t SteamClient007 = 0x645FE0;
    constexpr std::ptrdiff_t SteamClient006 = 0x645FD0;
    constexpr std::ptrdiff_t p2pvoice002 = 0xD97D0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD6200;
}

namespace tier0_dll { // tier0.dll
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18C2B0;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13F610;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12F790;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x61920;
}

namespace v8system_dll { // v8system.dll
    constexpr std::ptrdiff_t Source2V8System001 = 0x1670;
}

namespace valve_avi_dll { // valve_avi.dll
    constexpr std::ptrdiff_t VAvi001 = 0x2F90;
}

namespace valve_wmf_dll { // valve_wmf.dll
    constexpr std::ptrdiff_t VMediaFoundation001 = 0x12D0;
}

namespace vphysics2_dll { // vphysics2.dll
    constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x61120;
    constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x5C740;
}

namespace vscript_dll { // vscript.dll
    constexpr std::ptrdiff_t VScriptManager010 = 0x31DA0;
}

namespace vstdlib_s64_dll { // vstdlib_s64.dll
    constexpr std::ptrdiff_t IVALIDATE001 = 0x25000;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5760;
}

namespace worldrenderer_dll { // worldrenderer.dll
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x21650;
}