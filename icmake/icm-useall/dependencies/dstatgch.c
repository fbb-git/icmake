//#include "dependencies.ih"
//
//void d_statGch(int idx)
//{
//    if (!s_Dependencies.rm)
//        s_Dependencies.gchExists = 0;
//    else
//    {
//        s_Dependencies.gchExists = rss_exists(depGch(idx));
//
//        if (s_Dependencies.gchExists == 0)        // can't stat .gch-file
//            s_Dependencies.gchIndicator[idx] = 1; // so recompilation required
//    }
//}
