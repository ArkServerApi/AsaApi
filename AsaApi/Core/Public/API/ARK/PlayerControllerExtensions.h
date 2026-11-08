#pragma once


struct PlayerControllerExtensions
{
    /**
    * \brief Returns the player's EOS id (platform unique identifier)
    * \return The player's EOS id (platform unique identifier)
	*/
    FString GetEOSId();

    /**
    * \brief Returns the player's character name.
    * \return The player's  character name.
    */
    FString GetCharacterName();

    /**
    * \brief Returns player's tribe name if they are in a tribe. Otherwise returns the empty string.
    * \return The player's tribe name if they are in a tribe. Otherwise returns the empty string.
	*/
    FString GetTribeName();
};