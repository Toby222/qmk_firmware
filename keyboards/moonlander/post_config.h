#ifdef AUDIO_ENABLE
#    ifndef STARTUP_SONG
// #        define STARTUP_SONG SONG(E__NOTE(_DS5), E__NOTE(_D5), E__NOTE(_AS4), Q__NOTE(_F5))
#        define STARTUP_SONG SONG(ODE_TO_JOY)
#    endif

#    ifndef GOODBYE_SONG
// #        define GOODBYE_SONG SONG(E__NOTE(_D5), E__NOTE(_F5), E__NOTE(_C5), Q__NOTE(_AS4))
# define GOODBYE_SONG SONG(ROCK_A_BYE_BABY)
#    endif
#endif
