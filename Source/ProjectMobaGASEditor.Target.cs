//Copyright Lewis Herbert, created on behalf of U24 Solutions.

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjectMobaGASEditorTarget : TargetRules
{
	public ProjectMobaGASEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ProjectMobaGAS" } );
	}
}
