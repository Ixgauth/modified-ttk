set(pqPython_HEADERS_LOADED 1)
set(pqPython_HEADERS "pqPythonDebugLeaksView;pqPythonDebugLeaksView;pqPythonMacroSupervisor;pqPythonMacroSupervisor;pqPythonManager;pqPythonManager;pqPythonScriptEditor;pqPythonScriptEditor;pqPythonShell;pqPythonShell;pqPythonSyntaxHighlighter;pqPythonSyntaxHighlighter;pqPythonDialog;pqPythonDialog")

foreach(header ${pqPython_HEADERS})
  set(pqPython_HEADER_${header}_EXISTS 1)
endforeach()
