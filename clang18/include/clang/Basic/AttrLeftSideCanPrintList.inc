/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* List of attributes that can be print on the left side of a decl            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Attr.td                                                              *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#define CLANG_ATTR_LIST_CanPrintOnLeft \
 case attr::AArch64SVEPcs: \
 case attr::AArch64VectorPcs: \
 case attr::AMDGPUFlatWorkGroupSize: \
 case attr::AMDGPUKernelCall: \
 case attr::AMDGPUNumSGPR: \
 case attr::AMDGPUNumVGPR: \
 case attr::AMDGPUWavesPerEU: \
 case attr::ARMInterrupt: \
 case attr::AVRInterrupt: \
 case attr::AVRSignal: \
 case attr::AbiTag: \
 case attr::AcquireCapability: \
 case attr::AcquireHandle: \
 case attr::AcquiredAfter: \
 case attr::AcquiredBefore: \
 case attr::AddressSpace: \
 case attr::Alias: \
 case attr::AlignMac68k: \
 case attr::AlignNatural: \
 case attr::AlignValue: \
 case attr::Aligned: \
 case attr::AllocAlign: \
 case attr::AllocSize: \
 case attr::AlwaysDestroy: \
 case attr::AlwaysInline: \
 case attr::AnalyzerNoReturn: \
 case attr::Annotate: \
 case attr::AnnotateType: \
 case attr::AnyX86Interrupt: \
 case attr::AnyX86NoCallerSavedRegisters: \
 case attr::AnyX86NoCfCheck: \
 case attr::ArcWeakrefUnavailable: \
 case attr::ArgumentWithTypeTag: \
 case attr::ArmBuiltinAlias: \
 case attr::ArmLocallyStreaming: \
 case attr::ArmMveStrictPolymorphism: \
 case attr::ArmNewZA: \
 case attr::ArmPreservesZA: \
 case attr::ArmSharedZA: \
 case attr::ArmStreaming: \
 case attr::ArmStreamingCompatible: \
 case attr::Artificial: \
 case attr::AssertCapability: \
 case attr::AssertExclusiveLock: \
 case attr::AssertSharedLock: \
 case attr::AssumeAligned: \
 case attr::Assumption: \
 case attr::Availability: \
 case attr::AvailableOnlyInDefaultEvalMethod: \
 case attr::BPFPreserveAccessIndex: \
 case attr::BPFPreserveStaticOffset: \
 case attr::BTFDeclTag: \
 case attr::BTFTypeTag: \
 case attr::Blocks: \
 case attr::Builtin: \
 case attr::BuiltinAlias: \
 case attr::C11NoReturn: \
 case attr::CDecl: \
 case attr::CFAuditedTransfer: \
 case attr::CFConsumed: \
 case attr::CFGuard: \
 case attr::CFICanonicalJumpTable: \
 case attr::CFReturnsNotRetained: \
 case attr::CFReturnsRetained: \
 case attr::CFUnknownTransfer: \
 case attr::CPUDispatch: \
 case attr::CPUSpecific: \
 case attr::CUDAConstant: \
 case attr::CUDADevice: \
 case attr::CUDADeviceBuiltinSurfaceType: \
 case attr::CUDADeviceBuiltinTextureType: \
 case attr::CUDAGlobal: \
 case attr::CUDAHost: \
 case attr::CUDAInvalidTarget: \
 case attr::CUDALaunchBounds: \
 case attr::CUDAShared: \
 case attr::CXX11NoReturn: \
 case attr::CallableWhen: \
 case attr::Callback: \
 case attr::CalledOnce: \
 case attr::Capability: \
 case attr::CapturedRecord: \
 case attr::CarriesDependency: \
 case attr::Cleanup: \
 case attr::CmseNSCall: \
 case attr::CmseNSEntry: \
 case attr::CodeAlign: \
 case attr::CodeSeg: \
 case attr::Cold: \
 case attr::Common: \
 case attr::Const: \
 case attr::ConstInit: \
 case attr::Constructor: \
 case attr::Consumable: \
 case attr::ConsumableAutoCast: \
 case attr::ConsumableSetOnRead: \
 case attr::Convergent: \
 case attr::CoroLifetimeBound: \
 case attr::CoroOnlyDestroyWhenComplete: \
 case attr::CoroReturnType: \
 case attr::CoroWrapper: \
 case attr::DLLExport: \
 case attr::DLLExportStaticLocal: \
 case attr::DLLImport: \
 case attr::DLLImportStaticLocal: \
 case attr::Deprecated: \
 case attr::Destructor: \
 case attr::DiagnoseAsBuiltin: \
 case attr::DisableSanitizerInstrumentation: \
 case attr::DisableTailCalls: \
 case attr::EmptyBases: \
 case attr::EnforceTCB: \
 case attr::EnforceTCBLeaf: \
 case attr::EnumExtensibility: \
 case attr::Error: \
 case attr::ExcludeFromExplicitInstantiation: \
 case attr::ExclusiveTrylockFunction: \
 case attr::ExternalSourceSymbol: \
 case attr::FallThrough: \
 case attr::FastCall: \
 case attr::Final: \
 case attr::FlagEnum: \
 case attr::Flatten: \
 case attr::Format: \
 case attr::FormatArg: \
 case attr::FunctionReturnThunks: \
 case attr::GNUInline: \
 case attr::GuardedBy: \
 case attr::GuardedVar: \
 case attr::HIPManaged: \
 case attr::HLSLGroupSharedAddressSpace: \
 case attr::HLSLNumThreads: \
 case attr::HLSLParamModifier: \
 case attr::HLSLResource: \
 case attr::HLSLResourceBinding: \
 case attr::HLSLSV_DispatchThreadID: \
 case attr::HLSLSV_GroupIndex: \
 case attr::HLSLShader: \
 case attr::Hot: \
 case attr::IBAction: \
 case attr::IBOutlet: \
 case attr::IBOutletCollection: \
 case attr::IFunc: \
 case attr::InitPriority: \
 case attr::InitSeg: \
 case attr::IntelOclBicc: \
 case attr::InternalLinkage: \
 case attr::LTOVisibilityPublic: \
 case attr::LayoutVersion: \
 case attr::Leaf: \
 case attr::LifetimeBound: \
 case attr::Likely: \
 case attr::LoaderUninitialized: \
 case attr::LockReturned: \
 case attr::LocksExcluded: \
 case attr::LoopHint: \
 case attr::M68kInterrupt: \
 case attr::M68kRTD: \
 case attr::MIGServerRoutine: \
 case attr::MSABI: \
 case attr::MSAllocator: \
 case attr::MSConstexpr: \
 case attr::MSInheritance: \
 case attr::MSNoVTable: \
 case attr::MSP430Interrupt: \
 case attr::MSStruct: \
 case attr::MSVtorDisp: \
 case attr::MaxFieldAlignment: \
 case attr::MayAlias: \
 case attr::MaybeUndef: \
 case attr::MicroMips: \
 case attr::MinSize: \
 case attr::MinVectorWidth: \
 case attr::Mips16: \
 case attr::MipsInterrupt: \
 case attr::MipsLongCall: \
 case attr::MipsShortCall: \
 case attr::Mode: \
 case attr::MustTail: \
 case attr::NSConsumed: \
 case attr::NSConsumesSelf: \
 case attr::NSErrorDomain: \
 case attr::NSReturnsAutoreleased: \
 case attr::NSReturnsNotRetained: \
 case attr::NSReturnsRetained: \
 case attr::NVPTXKernel: \
 case attr::Naked: \
 case attr::NoAlias: \
 case attr::NoBuiltin: \
 case attr::NoCommon: \
 case attr::NoDebug: \
 case attr::NoDeref: \
 case attr::NoDestroy: \
 case attr::NoDuplicate: \
 case attr::NoEscape: \
 case attr::NoInline: \
 case attr::NoInstrumentFunction: \
 case attr::NoMerge: \
 case attr::NoMicroMips: \
 case attr::NoMips16: \
 case attr::NoProfileFunction: \
 case attr::NoRandomizeLayout: \
 case attr::NoReturn: \
 case attr::NoSanitize: \
 case attr::NoSpeculativeLoadHardening: \
 case attr::NoSplitStack: \
 case attr::NoStackProtector: \
 case attr::NoThreadSafetyAnalysis: \
 case attr::NoThrow: \
 case attr::NoUniqueAddress: \
 case attr::NoUwtable: \
 case attr::NonNull: \
 case attr::NotTailCalled: \
 case attr::OMPAllocateDecl: \
 case attr::OMPCaptureKind: \
 case attr::OMPCaptureNoInit: \
 case attr::OMPDeclareSimdDecl: \
 case attr::OMPDeclareTargetDecl: \
 case attr::OMPDeclareVariant: \
 case attr::OMPReferencedVar: \
 case attr::OMPThreadPrivateDecl: \
 case attr::OSConsumed: \
 case attr::OSConsumesThis: \
 case attr::OSReturnsNotRetained: \
 case attr::OSReturnsRetained: \
 case attr::OSReturnsRetainedOnNonZero: \
 case attr::OSReturnsRetainedOnZero: \
 case attr::ObjCBoxable: \
 case attr::ObjCBridge: \
 case attr::ObjCBridgeMutable: \
 case attr::ObjCBridgeRelated: \
 case attr::ObjCClassStub: \
 case attr::ObjCDesignatedInitializer: \
 case attr::ObjCDirect: \
 case attr::ObjCDirectMembers: \
 case attr::ObjCException: \
 case attr::ObjCExplicitProtocolImpl: \
 case attr::ObjCExternallyRetained: \
 case attr::ObjCGC: \
 case attr::ObjCIndependentClass: \
 case attr::ObjCInertUnsafeUnretained: \
 case attr::ObjCKindOf: \
 case attr::ObjCMethodFamily: \
 case attr::ObjCNSObject: \
 case attr::ObjCNonLazyClass: \
 case attr::ObjCNonRuntimeProtocol: \
 case attr::ObjCOwnership: \
 case attr::ObjCPreciseLifetime: \
 case attr::ObjCRequiresPropertyDefs: \
 case attr::ObjCRequiresSuper: \
 case attr::ObjCReturnsInnerPointer: \
 case attr::ObjCRootClass: \
 case attr::ObjCRuntimeName: \
 case attr::ObjCRuntimeVisible: \
 case attr::ObjCSubclassingRestricted: \
 case attr::OpenCLAccess: \
 case attr::OpenCLConstantAddressSpace: \
 case attr::OpenCLGenericAddressSpace: \
 case attr::OpenCLGlobalAddressSpace: \
 case attr::OpenCLGlobalDeviceAddressSpace: \
 case attr::OpenCLGlobalHostAddressSpace: \
 case attr::OpenCLIntelReqdSubGroupSize: \
 case attr::OpenCLKernel: \
 case attr::OpenCLLocalAddressSpace: \
 case attr::OpenCLPrivateAddressSpace: \
 case attr::OpenCLUnrollHint: \
 case attr::OptimizeNone: \
 case attr::Overloadable: \
 case attr::Override: \
 case attr::Owner: \
 case attr::Ownership: \
 case attr::Packed: \
 case attr::ParamTypestate: \
 case attr::Pascal: \
 case attr::PassObjectSize: \
 case attr::PatchableFunctionEntry: \
 case attr::Pcs: \
 case attr::Pointer: \
 case attr::PragmaClangBSSSection: \
 case attr::PragmaClangDataSection: \
 case attr::PragmaClangRelroSection: \
 case attr::PragmaClangRodataSection: \
 case attr::PragmaClangTextSection: \
 case attr::PreferredName: \
 case attr::PreferredType: \
 case attr::PreserveAll: \
 case attr::PreserveMost: \
 case attr::PtGuardedBy: \
 case attr::PtGuardedVar: \
 case attr::Ptr32: \
 case attr::Ptr64: \
 case attr::Pure: \
 case attr::RISCVInterrupt: \
 case attr::RandomizeLayout: \
 case attr::ReadOnlyPlacement: \
 case attr::RegCall: \
 case attr::Reinitializes: \
 case attr::ReleaseCapability: \
 case attr::ReleaseHandle: \
 case attr::RenderScriptKernel: \
 case attr::ReqdWorkGroupSize: \
 case attr::RequiresCapability: \
 case attr::Restrict: \
 case attr::Retain: \
 case attr::ReturnTypestate: \
 case attr::ReturnsNonNull: \
 case attr::ReturnsTwice: \
 case attr::SPtr: \
 case attr::SYCLKernel: \
 case attr::SYCLSpecialClass: \
 case attr::ScopedLockable: \
 case attr::Section: \
 case attr::SelectAny: \
 case attr::Sentinel: \
 case attr::SetTypestate: \
 case attr::SharedTrylockFunction: \
 case attr::SpeculativeLoadHardening: \
 case attr::StandaloneDebug: \
 case attr::StdCall: \
 case attr::StrictFP: \
 case attr::StrictGuardStackCheck: \
 case attr::Suppress: \
 case attr::SwiftAsync: \
 case attr::SwiftAsyncCall: \
 case attr::SwiftAsyncContext: \
 case attr::SwiftAsyncError: \
 case attr::SwiftAsyncName: \
 case attr::SwiftAttr: \
 case attr::SwiftBridge: \
 case attr::SwiftBridgedTypedef: \
 case attr::SwiftCall: \
 case attr::SwiftContext: \
 case attr::SwiftError: \
 case attr::SwiftErrorResult: \
 case attr::SwiftIndirectResult: \
 case attr::SwiftName: \
 case attr::SwiftNewType: \
 case attr::SwiftObjCMembers: \
 case attr::SwiftPrivate: \
 case attr::SysVABI: \
 case attr::TLSModel: \
 case attr::Target: \
 case attr::TargetClones: \
 case attr::TargetVersion: \
 case attr::TestTypestate: \
 case attr::ThisCall: \
 case attr::Thread: \
 case attr::TransparentUnion: \
 case attr::TrivialABI: \
 case attr::TryAcquireCapability: \
 case attr::TypeNonNull: \
 case attr::TypeNullUnspecified: \
 case attr::TypeNullable: \
 case attr::TypeNullableResult: \
 case attr::TypeTagForDatatype: \
 case attr::TypeVisibility: \
 case attr::UPtr: \
 case attr::Unavailable: \
 case attr::Uninitialized: \
 case attr::Unlikely: \
 case attr::UnsafeBufferUsage: \
 case attr::Unused: \
 case attr::UseHandle: \
 case attr::Used: \
 case attr::UsingIfExists: \
 case attr::Uuid: \
 case attr::VecReturn: \
 case attr::VecTypeHint: \
 case attr::VectorCall: \
 case attr::Visibility: \
 case attr::WarnUnused: \
 case attr::WarnUnusedResult: \
 case attr::Weak: \
 case attr::WeakImport: \
 case attr::WeakRef: \
 case attr::WebAssemblyExportName: \
 case attr::WebAssemblyFuncref: \
 case attr::WebAssemblyImportModule: \
 case attr::WebAssemblyImportName: \
 case attr::WorkGroupSizeHint: \
 case attr::X86ForceAlignArgPointer: \
 case attr::XRayInstrument: \
 case attr::XRayLogArgs: \
 case attr::ZeroCallUsedRegs: