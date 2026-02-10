#ifndef GUARD_BATTLE_END_TURN
#define GUARD_BATTLE_END_TURN

u32 DoEndTurnEffects(void);
u32 GetBattlerSideForMessage(u32 side);
bool32 EndTurnTerrain(u32 terrainFlag, u32 stringTableId);

#endif // GUARD_BATTLE_END_TURN

