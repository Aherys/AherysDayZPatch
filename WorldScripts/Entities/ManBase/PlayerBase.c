modded class PlayerBase extends ManBase
{
	
	bool Save()
	{
		if (GetPlayerState() == EPlayerStates.ALIVE)
		{
			GetHive().CharacterSave(this);
			Debug.Log("Player "+this.ToString()+ " saved as alive");
			
			return true;
		}
		return false;		
	}
}