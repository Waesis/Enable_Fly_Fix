Search : m_fSyncTime = get_float_time();

Change :
#ifdef ENABLE_FLY_FIX
		m_fSyncTime = get_dword_time();
#else
		m_fSyncTime = get_float_time();
#endif

Search : if (get_float_time() - m_fSyncTime >= 3.0f)

Change :

#ifdef ENABLE_FLY_FIX
	if (get_dword_time() - m_fSyncTime >= 100)
		return true;
#else
	if (get_float_time() - m_fSyncTime >= 3.0f)
		return true;
#endif