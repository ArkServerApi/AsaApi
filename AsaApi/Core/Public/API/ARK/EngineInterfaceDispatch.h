#pragma once
struct UClass;
class IAnimClassInterface;
template<class T>
inline IAnimClassInterface* AsaAnimInterfaceReceiver(T* Object)
{
    auto* Receiver = NativeCall<IAnimClassInterface*, UClass*>(nullptr,
        "IAnimClassInterface.GetFromClass(UClass*)",
        const_cast<UClass*>(static_cast<const UClass*>(Object)));
    if (!Receiver) throw std::runtime_error("Animation class interface is unavailable");
    return Receiver;
}
