///*
//
//    returns the meaning of an escaped character, given the char, or 0 (not a
//    standard escape character)
//
//*/
//
//#include "rss.ih"
//
//static char stdEscape[] = 
//            {'n', 't', 'v', 'b', 'r', 'f', 'a', '\'', '"', '\\'};
//
//static char escaped[] = 
//            {'\n', '\t', '\v', '\b', '\r', '\f', '\a', '\'', '"', '\\'};
//
//int rss_escapeChar(int ch)
//{
//    char *cp = strchr(stdEscape, ch);
//
//    return cp == NULL ? 0 : escaped[cp - stdEscape];
//}

