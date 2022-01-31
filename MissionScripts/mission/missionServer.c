modded class MissionServer extends MissionBase
{
	
	override void HandleBody(PlayerBase player)
	{
		
		if (player.IsAlive())
		{
			// remove the body
			player.Delete();	
		}
	}
}