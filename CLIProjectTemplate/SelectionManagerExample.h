// <copyright file="SelectionManagerExample.cpp" company="AVA">
// Copyright (c) 2022 - All rights reserved.
// </copyright>
// <summary>Declares the SelectionManager class</summary>

// This class demonstrates using Mastercam NET-Hook API and a C++ methods from a C++/CLI project.

#pragma once

namespace Mastercam::IO::Interop {

using namespace System;
using namespace System::Collections::Generic;

// Namespaces we reference in the NET-Hook API
using namespace Mastercam::App::Types;
using namespace Mastercam::Database;
using namespace Mastercam::Database::Types;
using namespace Mastercam::IO;
using namespace Mastercam::IO::Types;

/// <summary> The SelectionManager class. </summary>
public ref class SelectionManager
	{
public:
	/// <summary> This method create a geometry (circle). </summary>
	///
	/// <returns> ID of created geometry. </returns>
	static int SelectionManager::CreateGeometry ();

	/// <summary> This method retrieves the entity of the geometry and do a translation. </summary>
	///
	/// <param name="geom"> The geometry selected by the user. </param>
	///
	/// <returns> True if it succeeds, false if it fails. </returns>
	static bool SelectionManager::TranslateSelectedGeometry (int geometryId);

	/// <summary> This method allows to move the entity of the geometry selected. </summary>
	///
	/// <returns> True if it succeeds, false if it fails. </returns>
	static bool SelectionManager::MoveEntity (ent *entity);
	};
}
