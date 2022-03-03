Search : m_fSyncTime;

Replece :
#ifdef ENABLE_FLY_FIX
		DWORD			m_fSyncTime;
#else
		float			m_fSyncTime;
#endif