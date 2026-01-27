#pragma once
#include <cstdint>
#include <iostream>
using namespace std;

// Roblox Version: version-f8734e043e1e40a2
// Byfron Version: ???
namespace offsets {

    inline constexpr uintptr_t Adornee = 0x108;
    // = Misc::Adornee

    inline constexpr uintptr_t Anchored = 0x1AE;
    // = BasePart::PrimitiveFlags (bitfield container)

    inline constexpr uintptr_t AnchoredMask = 0x2;
    // = PrimitiveFlags::Anchored

    inline constexpr uintptr_t AnimationId = 0xD0;
    // = Misc::AnimationId

    inline constexpr uintptr_t AttributeToNext = 0x58;
    // = Instance::AttributeToNext

    inline constexpr uintptr_t AttributeToValue = 0x18;
    // = Instance::AttributeToValue

    inline constexpr uintptr_t Camera = 0x460;
    // = Workspace::CurrentCamera

    inline constexpr uintptr_t CameraSubject = 0xE8;
    // = Camera::CameraSubject

    inline constexpr uintptr_t CameraType = 0x158;
    // = Camera::CameraType

    inline constexpr uintptr_t FieldOfView = 0x160;
    // = Camera::FieldOfView

    inline constexpr uintptr_t CameraPos = 0x11C;
    // = Camera::Position

    inline constexpr uintptr_t CameraRotation = 0xF8;
    // = Camera::Rotation

    inline constexpr uintptr_t CanCollideMask = 0x8;
    // = PrimitiveFlags::CanCollide

    inline constexpr uintptr_t CanTouchMask = 0x10;
    // = PrimitiveFlags::CanTouch

    inline constexpr uintptr_t Children = 0x70;
    // = Instance::ChildrenStart

    inline constexpr uintptr_t ChildrenEnd = 0x8;
    // = Instance::ChildrenEnd

    inline constexpr uintptr_t ClassDescriptor = 0x18;
    // = Instance::ClassDescriptor

    inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;
    // = Instance::ClassName

    inline constexpr uintptr_t ClickDetectorMaxActivationDistance = 0x100;
    // = ClickDetector::MaxActivationDistance

    inline constexpr uintptr_t ClockTime = 0x1B8;
    // = Lighting::ClockTime

    inline constexpr uintptr_t CreatorId = 0x188;
    // = DataModel::CreatorId

    inline constexpr uintptr_t DataModelPrimitiveCount = 0x438;
    // = DataModel::PrimitiveCount

    inline constexpr uintptr_t DecalTexture = 0x198;
    // = Textures::Decal_Texture

    inline constexpr uintptr_t Dimensions = 0x720;
    // = VisualEngine::Dimensions

    inline constexpr uintptr_t DisplayName = 0x130;
    // = Player::DisplayName

    inline constexpr uintptr_t FogColor = 0xFC;
    // = Lighting::FogColor

    inline constexpr uintptr_t FogEnd = 0x134;
    // = Lighting::FogEnd

    inline constexpr uintptr_t FogStart = 0x138;
    // = Lighting::FogStart

    inline constexpr uintptr_t FrameRotation = 0x188;
    // = GuiObject::Rotation

    inline constexpr uintptr_t GameId = 0x190;
    // = DataModel::GameId

    inline constexpr uintptr_t GameLoaded = 0x5F8;
    // = DataModel::GameLoaded

    inline constexpr uintptr_t Gravity = 0x9B8;
    // = Workspace::ReadOnlyGravity

    inline constexpr uintptr_t Health = 0x194;
    // = Humanoid::Health

    inline constexpr uintptr_t HipHeight = 0x1A0;
    // = Humanoid::HipHeight

    inline constexpr uintptr_t HumanoidState = 0x8D8;
    // = Humanoid::HumanoidState

    inline constexpr uintptr_t InputObject = 0x0;
    // = MouseService::InputObject

    inline constexpr uintptr_t JobId = 0x138;
    // = DataModel::JobId

    inline constexpr uintptr_t JobStart = 0x1D0;
    // = TaskScheduler::JobStart

    inline constexpr uintptr_t JobEnd = 0x1D8;
    // = TaskScheduler::JobEnd

    inline constexpr uintptr_t Job_Name = 0x18;
    // = TaskScheduler::JobName

    inline constexpr uintptr_t JumpPower = 0x1B0;
    // = Humanoid::JumpPower

    inline constexpr uintptr_t LocalPlayer = 0x130;
    // = Player::LocalPlayer

    inline constexpr uintptr_t MaterialType = 0x0;
    // = BasePart::Material

    inline constexpr uintptr_t MaxHealth = 0x1B4;
    // = Humanoid::MaxHealth

    inline constexpr uintptr_t MeshPartTexture = 0x318;
    // = MeshPart::Texture

    inline constexpr uintptr_t ModelInstance = 0x370;
    // = Player::ModelInstance

    inline constexpr uintptr_t MoonTextureId = 0xE0;
    // = Sky::MoonTextureId

    inline constexpr uintptr_t MoveDirection = 0x158;
    // = Humanoid::MoveDirection

    inline constexpr uintptr_t Name = 0xB0;
    // = Instance::Name

    inline constexpr uintptr_t Parent = 0x68;
    // = Instance::Parent

    inline constexpr uintptr_t Position = 0xE4;
    // = BasePart::Position

    inline constexpr uintptr_t Primitive = 0x148;
    // = BasePart::Primitive

    inline constexpr uintptr_t ProximityPromptMaxActivationDistance = 0x148;
    // = ProximityPrompt::MaxActivationDistance

    inline constexpr uintptr_t RigType = 0x1C8;
    // = Humanoid::RigType

    inline constexpr uintptr_t Rotation = 0xC0;
    // = BasePart::Rotation

    inline constexpr uintptr_t SkyboxBk = 0x110;
    // = Sky::SkyboxBk

    inline constexpr uintptr_t SkyboxDn = 0x140;
    // = Sky::SkyboxDn

    inline constexpr uintptr_t SkyboxFt = 0x170;
    // = Sky::SkyboxFt

    inline constexpr uintptr_t SkyboxLf = 0x1A0;
    // = Sky::SkyboxLf

    inline constexpr uintptr_t SkyboxRt = 0x1D0;
    // = Sky::SkyboxRt

    inline constexpr uintptr_t SkyboxUp = 0x200;
    // = Sky::SkyboxUp

    inline constexpr uintptr_t SoundId = 0xE0;
    // = Sky::MoonTextureId

    inline constexpr uintptr_t StarCount = 0x260;
    // = Sky::StarCount

    inline constexpr uintptr_t StringLength = 0x10;
    // = Misc::StringLength

    inline constexpr uintptr_t SunTextureId = 0x230;
    // = Sky::SunTextureId

    inline constexpr uintptr_t Team = 0x280;
    // = Player::Team

    inline constexpr uintptr_t Transparency = 0xF0;
    // = BasePart::Transparency

    inline constexpr uintptr_t UserId = 0x2A8;
    // = Player::UserId

    inline constexpr uintptr_t Value = 0xD0;
    // = Misc::Value

    inline constexpr uintptr_t Velocity = 0xF0;
    // = BasePart::AssemblyLinearVelocity

    inline constexpr uintptr_t ViewportSize = 0x2E8;
    // = MeshPart::MeshId (shared container)

    inline constexpr uintptr_t VisualEnginePointer = 0x7A7F950;
    // = VisualEngine::Pointer

    inline constexpr uintptr_t WalkSpeed = 0x1D4;
    // = Humanoid::Walkspeed

    inline constexpr uintptr_t WalkSpeedCheck = 0x3C0;
    // = Humanoid::WalkspeedCheck

    inline constexpr uintptr_t Workspace = 0x178;
    // = DataModel::Workspace

    inline constexpr uintptr_t viewmatrix = 0x4B0;
    // = VisualEngine::ViewMatrix

    inline constexpr uintptr_t NextGenReplicatorEnabledWrite4 = 0x6804F58;
    // = UNMATCHED (Global / Replicator / Engine flag)

    inline constexpr uintptr_t PlayerConfigurerPointer = 0x7F7FCE8;
    // = PlayerConfigurer::Pointer

    inline constexpr uintptr_t MouseSensitivity = 0x8001970;
    // = MouseService::SensitivityPointer

    inline constexpr uintptr_t RequireBypass = 0x0;
    // = Misc::RequireLock

    inline constexpr uintptr_t TagList = 0x0;
    // = UNMATCHED (engine container / reserved)

    inline constexpr uintptr_t DataModelDeleterPointer = 0x7FA1990;
    // = UNMATCHED (engine internal)

    inline constexpr uintptr_t FakeDataModelPointer = 0x7FA1988;
    // = FakeDataModel::Pointer
}
