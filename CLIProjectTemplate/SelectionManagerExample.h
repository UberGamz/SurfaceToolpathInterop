// <copyright file="SelectionManagerExample.cpp" company="AVA">
// Copyright (c) 2022 - All rights reserved.
// </copyright>
// <summary>Declares the SelectionManager class</summary>

// This class demonstrates using Mastercam NET-Hook API and a C++ methods from a C++/CLI project.

#pragma once

namespace Mastercam::IO::Interop {}

using namespace System;
using namespace System::Collections::Generic;

// Namespaces we reference in the NET-Hook API

using namespace Mastercam::IO;

/// <summary> The SelectionManager class. </summary>
ref class OperationsManagerInterop abstract sealed
{
public:
	/// <summary> Retrieves the operations found in the Toolpath Manager of the specified type. </summary>
	///
	/// <param name="opCode"> (Optional) The operation code to filter on. (TP_NULL for NO Filtering). </param>
	///
	/// <returns> The list of matching operations found. </returns>
	static System::Collections::Generic::List<int>^ GetOperations(int opCode)
	{

		auto list = gcnew System::Collections::Generic::List<int>();
		for (auto index = 0; index < TpMainOpMgr.GetMainOpList().GetSize(); ++index)
		{
			auto op = TpMainOpMgr.GetMainOpList()[index];
			if (op && (opCode == TP_NULL || op->opcode == opCode))
			{
				list->Add(op->op_idn);
			}
		}

		return list;
	}
};
