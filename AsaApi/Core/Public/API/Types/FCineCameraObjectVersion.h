#pragma once


namespace FCineCameraObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		ChangeDefaultFilmbackToDigitalFilm = 0x1,
		VersionPlusOne = 0x2,
		LatestVersion = 0x1
	};
}