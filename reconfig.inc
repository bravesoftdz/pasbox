{$IFNDEF UNIX}
	{$UNDEF CONFIG_FEATURE_INSTALLER}
{$ENDIF}

{$IFDEF CONFIG_CLEAR}
	{$IFNDEF CONFIG_FEATURE_USE_CRT}
		{$FATAL CONFIG_FEATURE_USE_CRT is required for CONFIG_CLEAR}
	{$ENDIF}
{$ENDIF}
