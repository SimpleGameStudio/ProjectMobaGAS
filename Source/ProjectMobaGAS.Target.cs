//Copyright Lewis Herbert, created on behalf of U24 Solutions.

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjectMobaGASTarget : TargetRules
{
	public ProjectMobaGASTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ProjectMobaGAS" } );
	}
}
