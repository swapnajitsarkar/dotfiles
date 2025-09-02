// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// hyprland_focus_grab_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2024 outfoxxed
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.

    3. Neither the name of the copyright holder nor the names of its
       contributors may be used to endorse or promote products derived from
       this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
    SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  
*/

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;


class CHyprlandFocusGrabManagerV1;
class CHyprlandFocusGrabV1;
class CHyprlandFocusGrabV1;
class CWlSurface;
class CWlSurface;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface hyprland_focus_grab_manager_v1_interface;
extern const wl_interface hyprland_focus_grab_v1_interface;

#endif

struct CHyprlandFocusGrabManagerV1DestroyWrapper {
    wl_listener listener;
    CHyprlandFocusGrabManagerV1* parent = nullptr;
};
            

class CHyprlandFocusGrabManagerV1 {
  public:
    CHyprlandFocusGrabManagerV1(wl_client* client, uint32_t version, uint32_t id);
    ~CHyprlandFocusGrabManagerV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CHyprlandFocusGrabManagerV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //

    void setCreateGrab(F<void(CHyprlandFocusGrabManagerV1*, uint32_t)> handler);
    void setDestroy(F<void(CHyprlandFocusGrabManagerV1*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CHyprlandFocusGrabManagerV1*, uint32_t)> createGrab;
        F<void(CHyprlandFocusGrabManagerV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CHyprlandFocusGrabManagerV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CHyprlandFocusGrabManagerV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CHyprlandFocusGrabV1DestroyWrapper {
    wl_listener listener;
    CHyprlandFocusGrabV1* parent = nullptr;
};
            

class CHyprlandFocusGrabV1 {
  public:
    CHyprlandFocusGrabV1(wl_client* client, uint32_t version, uint32_t id);
    ~CHyprlandFocusGrabV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CHyprlandFocusGrabV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //

    void setAddSurface(F<void(CHyprlandFocusGrabV1*, wl_resource*)> handler);
    void setRemoveSurface(F<void(CHyprlandFocusGrabV1*, wl_resource*)> handler);
    void setCommit(F<void(CHyprlandFocusGrabV1*)> handler);
    void setDestroy(F<void(CHyprlandFocusGrabV1*)> handler);

    // --------------- Events --------------- //

    void sendCleared();
    void sendClearedRaw();

  private:
    struct {
        F<void(CHyprlandFocusGrabV1*, wl_resource*)> addSurface;
        F<void(CHyprlandFocusGrabV1*, wl_resource*)> removeSurface;
        F<void(CHyprlandFocusGrabV1*)> commit;
        F<void(CHyprlandFocusGrabV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CHyprlandFocusGrabV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CHyprlandFocusGrabV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
