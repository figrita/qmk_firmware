#pragma once

#ifdef MIDI_ENABLE
#include "midi.h"
#include <LUFA/Drivers/USB/USB.h>
#include "qmk_midi.h"
#include "sysex_tools.h"
#include "midi.h"
#include "usb_descriptor.h"
#include "process_midi.h"
#if API_SYSEX_ENABLE
#    include "api.h"
#endif
extern MidiDevice midi_device;
void              setup_midi(void);
void              send_midi_packet(MIDI_EventPacket_t* event);
bool              recv_midi_packet(MIDI_EventPacket_t* const event);
#endif
