//#include "rss.ih"
//
//size_t rs_atox(char *string, int *nProcessed)
//{
//    register size_t i;
//    register size_t radix;
//    
//    unsigned hex;
//
//    if (*string == 'x')
//    {
//        ++*nProcessed;                      /* 'x' processed */
//        ++string;                           /* and skipped */
//        if (!sscanf(string, "%3x", &hex))   /* No hex char value ? */
//            return -1;                      /* Flag no hex digit */
//
//        hex &= 0xff;                        /* Compute char value */
//        radix = 16;                         /* Radix setting */
//    }
//    else if (sscanf(string, "%3o", &hex))   /* octal value ? */
//    {
//        if (hex >= 0x100)                   /* Octal yields too big a value */
//            return -1;                      /* Return failure */
//
//        radix = 8;                          /* Radix setting */
//    }
//    else                                    /* Return character unchanged */
//    {
//        ++*nProcessed;                      /* ch */
//        return *string;
//    }
//
//    gr_hexDigits[radix] = 0;                  /* Set hex conversion */
//
//    for (i = 3; i--;)                       /* At most 3 digits */
//    {
//        register int ch = *string++;        /* Fetch char */
//
//        ch = tolower(ch);                   /* Convert to lower */
//
//        if (!strchr(gr_hexDigits, ch))       /* No more number character ? */
//            break;                          /* Leave the loop */
//
//        ++*nProcessed;                      /* eat char. */
//    }
//
//    gr_hexDigits[8] = '8';                    /* restore the hex-string */
//
//    return hex;                             /* Returnvalue */
//}
//
//
//
