#pragma once


#include "app-core/multimedia/audio_mixer/device.h"


namespace multimedia
{


   namespace audio_mixer_alsa
   {


      class CLASS_DECL_AUDIO_MIXER_ALSA device :
         virtual public ::multimedia::audio_mixer::device
      {
      public:


         //HMIXER                        m_hMixer;
         //MIXERCAPS                     m_mixercaps;


         device();
         ~device() override;

         virtual bool initialize(::multimedia::audio_mixer::audio_mixer * pmixer);

         ::multimedia::audio_mixer::audio_mixer * get_mixer();
         const char * GetSZPName();
         //bool OnCommand(WPARAM wparam, LPARAM lparam);
         void close();
         void MapDlgCtrlIDToLineControls(::multimedia::audio_mixer::source * pSource);
         void MapDlgCtrlIDToControls();
         void MapLineControls(::multimedia::audio_mixer::source * pSource);
         void OnMixerControlChange(::u32 dwControlID);
         void OnMixerLineChange(::u32 dwLineID);
         void map_lines();
         void map_controls();
         void get_destination(::multimedia::audio_mixer::e_destination edestination, ::multimedia::audio_mixer::destination ** ppDestination);
         void initialize_destinations();
         void initialize_capabilities();
         void open(::u32 uiMixerId, ::u32 dwCallback, ::u32 dwInstance, ::u32 fdwOpen);


      };


   } // namespace audio_mixer_alsa


} // namespace multimedia





