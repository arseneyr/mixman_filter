/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_mixmanfilter,
    0x4b52a227,0x4f33,0x4395,0x91,0x88,0x28,0xd2,0xab,0x55,0x70,0xad);
// {4b52a227-4f33-4395-9188-28d2ab5570ad}
