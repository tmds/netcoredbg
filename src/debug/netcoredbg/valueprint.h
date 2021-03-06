// Copyright (c) 2017 Samsung Electronics Co., LTD
// Distributed under the MIT License.
// See the LICENSE file in the project root for more information.

HRESULT PrintValue(ICorDebugValue *pInputValue, std::string &output, bool escape = true);
HRESULT DereferenceAndUnboxValue(ICorDebugValue * pValue, ICorDebugValue** ppOutputValue, BOOL * pIsNull = NULL);
