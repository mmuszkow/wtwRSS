#pragma once

#include "stdinc.h"

namespace wtwRSS {
	class SoundsController {

		WTWFUNCTIONS*	wtw;

		bool			soundsPresent;
		bool			notifySoundPresent;
		bool			errorSoundPresent;

		// blocked
		SoundsController() {}
	public:
		inline static SoundsController& getInstance() {
			static SoundsController instance;
			return instance;
		}

		inline void init(WTWFUNCTIONS* fn) {
			wtw = fn;
			soundsPresent = (wtw->fnExists(L"Sounds/Player/PlayFile") == S_OK);
			notifySoundPresent = true;
			errorSoundPresent = true;
		}

		inline void playNotifySoundIfPossible() {
			static const wchar_t NOTIFY_SOUND_FILENAME[] = L"wtwRSS/Sound/Notify";
			if(soundsPresent && notifySoundPresent)
				if(wtw->fnCall(L"Sounds/Player/PlayFile", reinterpret_cast<WTW_PARAM>(NOTIFY_SOUND_FILENAME), 0) != 0)
					notifySoundPresent = false;
		}

		inline void playErrorSoundIfPossible() {
			static const wchar_t ERROR_SOUND_FILENAME[] = L"wtwRSS/Sound/Error";
			if(soundsPresent && errorSoundPresent)
				if(wtw->fnCall(L"Sounds/Player/PlayFile", reinterpret_cast<WTW_PARAM>(ERROR_SOUND_FILENAME), 0) != 0)
					errorSoundPresent = false;
		}
	};
}; // namespace wtwRSS
