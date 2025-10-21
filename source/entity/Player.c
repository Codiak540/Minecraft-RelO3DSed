#include <entity/Player.h>
#include <misc/Collision.h>
#include <gui/DebugUI.h>

void PlayerInv1(Player* player){
		int l = 0;
		player->inventory[l++] = (ItemStack){Block_Stone, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Granite, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Smooth_Granite, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Diorite, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Smooth_Diorite, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Andesite, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Smooth_Andesite, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Grass, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Dirt, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Coarse_Dirt, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Podzol, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Cobblestone, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Planks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Spruce_Planks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Birch_Planks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Jungle_Planks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Acacia_Planks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Big_Oak_Planks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Bedrock, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Sand, 0, 1};
		player->inventory[l++] = (ItemStack){Block_RedSand, 0, 1};
		//gravel
		//gold ore
		//iron ore
		//coal ore
		player->inventory[l++] = (ItemStack){Block_Log, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Spruce_Log, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Birch_Log, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Jungle_Log, 0, 1};
		//sponge
		//wet sponge
		player->inventory[l++] = (ItemStack){Block_Glass, 0, 1};
		//lapiz ore
		player->inventory[l++] = (ItemStack){Block_Lapis, 0, 1};
		//sandstone
		//chiesled sandstone
		//smooth sandstone
		for (int i = 0; i < 16; i++) player->inventory[l++] = (ItemStack){Block_Wool, i, 1};
		player->inventory[l++] = (ItemStack){Block_Gold_Block, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Iron_Block, 0, 1};
		//slabs
		player->inventory[l++] = (ItemStack){Block_Brick, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Bookshelf, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Cobblestone_mossy, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Obsidian, 0, 1};
		//oak stairs
		//diamond ore
		player->inventory[l++] = (ItemStack){Block_Diamond_Block, 0, 1};
		//cobble stairs
		//redstone ore
		//ice
		//snow
		//clay
}


void PlayerInv2(Player* player){
		int l = 0;
		
		player->inventory[l++] = (ItemStack){Block_Pumpkin, 0, 1};
		//netherrack
		//soul sand
		player->inventory[l++] = (ItemStack){Block_Glowstone, 0, 1};
		//jack o lantern
		for (int i = 0; i < 16; i++) player->inventory[l++] = (ItemStack){Block_Glass, i, 1};
		player->inventory[l++] = (ItemStack){Block_Stonebrick, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Stonebrick_Mossy, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Stonebrick_Cracked, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Chiesled_Deepslate, 0, 1};
		//melon
		//stairs
		//mycylium
		//nether brick
		//nether brick stairs
		//end cobble
		//slabs
		//emerald ore
		player->inventory[l++] = (ItemStack){Block_Emerald, 0, 1};
		//stairs
		//nether quartz ore
		//quartz
		//chiezled quartz
		//quartz pillar
		//terracottas
		player->inventory[l++] = (ItemStack){Block_Acacia_Log, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Big_Oak_Log, 0, 1};
		//prismarine
		player->inventory[l++] = (ItemStack){Block_Prismarine_Bricks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Dark_Prismarine, 0, 1};
		//sea lantern
		//hay
		//terrocotta
		//coal block
		//packed ice
		//red sandstone
		//chiesled red sandstone
		//smooth red sandstone
		//purpur
		//purpur pillars
		//purpur stairs
		//purpur slab
		player->inventory[l++] = (ItemStack){Block_End_Bricks, 0, 1};
		//magma block
		//concrete
		//concrete powder

		player->inventory[l++] = (ItemStack){Block_Leaves, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Stonebrick_Carved, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Deepslate, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Polished_Deepslate, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Deepslate_Bricks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Cracked_Deepslate_Bricks, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Water, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Lava, 0, 1};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};		
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
		player->inventory[l++] = (ItemStack){Block_Air, 0, 0};
}

void Player_Init(Player* player, World* world) {
	player->position = f3_new(0.f, 0.f, 0.f);

	player->bobbing = 0.f;
	player->pitch = 0.f;
	player->yaw = 0.f;

	player->grounded = false;
	player->sprinting = false;
	player->world = world;

	player->fovAdd = 0.f;
	player->crouchAdd = 0.f;

	player->view = f3_new(0, 0, -1);

	player->crouching = false;
	player->flying = false;

	player->blockInSeight = false;
	player->blockInActionRange = false;

	player->velocity = f3_new(0, 0, 0);
	player->simStepAccum = 0.f;

	player->breakPlaceTimeout = 0.f;

	player->quickSelectBarSlots = INVENTORY_QUICKSELECT_MAXSLOTS;
	player->quickSelectBarSlot = 0;
	





	for (int i = 0; i < INVENTORY_QUICKSELECT_MAXSLOTS; i++) player->quickSelectBar[i] = (ItemStack){Block_Air, 0, 0};




	player->autoJumpEnabled = true;
}

void Player_Update(Player* player) {
	player->view = f3_new(-sinf(player->yaw) * cosf(player->pitch), sinf(player->pitch), -cosf(player->yaw) * cosf(player->pitch));

	player->blockInSeight =
	    Raycast_Cast(player->world, f3_new(player->position.x, player->position.y + PLAYER_EYEHEIGHT, player->position.z), player->view,
			 &player->viewRayCast);
	player->blockInActionRange = player->blockInSeight && player->viewRayCast.distSqr < 5.f * 5.f * 5.f;
}

bool Player_CanMove(Player* player, float newX, float newY, float newZ) {
	for (int x = -1; x < 2; x++) {
		for (int y = 0; y < 3; y++) {
			for (int z = -1; z < 2; z++) {
				int pX = FastFloor(newX) + x;
				int pY = FastFloor(newY) + y;
				int pZ = FastFloor(newZ) + z;
				if (World_GetBlock(player->world, pX, pY, pZ) != Block_Air) {
					if (AABB_Overlap(newX - PLAYER_COLLISIONBOX_SIZE / 2.f, newY, newZ - PLAYER_COLLISIONBOX_SIZE / 2.f,
							 PLAYER_COLLISIONBOX_SIZE, PLAYER_HEIGHT, PLAYER_COLLISIONBOX_SIZE, pX, pY, pZ, 1.f,
							 1.f, 1.f)) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

void Player_Jump(Player* player, float3 accl) {
	if (player->grounded && !player->flying) {
		player->velocity.x = accl.x * 1;
		player->velocity.z = accl.z * 1;
		player->velocity.y = 7.0f;
		player->jumped = true;
		if(player->crouching == true){
			player->crouching = true;
		}
		else
			player->crouching = false;
	}
}





void Player_Forward(Player* player, float3 accl) {
	if (player->grounded && !player->flying) {
		player->velocity.x = 4.3; //accl.x * 1;
		player->velocity.z = 4.3; //accl.z * 1;
		player->velocity.y = accl.y * 1;
	}
}






void Player_Sprinting(Player* player, float3 accl) {
	if (player->grounded && !player->flying && player->sprinting && !player->jumped) {
		player->velocity.x = accl.x * 2;
		player->velocity.z = accl.z * 2;
		player->velocity.y = accl.y * 1;
		player->crouching = false;
	}
}

float MaxWalkVelocity = 3.0f;
const float MaxFallVelocity = -78.4f;
const float GravityPlusFriction = 10.f;
void Player_Move(Player* player, float dt, float3 accl) {
	player->breakPlaceTimeout -= dt;
	player->simStepAccum += dt;
	const float SimStep = 1.f / 60.f;
	while (player->simStepAccum >= SimStep) {
		player->velocity.y -= GravityPlusFriction * SimStep * 2.f;
		if (player->velocity.y < MaxFallVelocity) player->velocity.y = MaxFallVelocity;

		if (player->flying) player->velocity.y = 0.f;

		float speedFactor = 0.7f;
		if (!player->grounded && !player->flying) {
			if(player->jumped && player->sprinting)
				speedFactor = 0.4f; //was 0.5
			if (player->jumped && !player->sprinting)
				speedFactor = 0.2f; //was 0.5
		} else if (player->flying)
			speedFactor = 1.5f;
		else if (player->crouching)
			speedFactor = 0.4f;

			if (player->sprinting){
				speedFactor = 1.4f; //player->velocity.x = accl.x * 1.7f;
				//player->velocity.z = accl.z * 1.7f;
			}

		float3 newPos = f3_add(player->position, f3_add(f3_scl(player->velocity, SimStep), f3_scl(accl, SimStep * speedFactor)));
		float3 finalPos = player->position;

		bool wallCollision = false, wasGrounded = player->grounded;

		player->grounded = false;
		for (int j = 0; j < 3; j++) {
			int i = (int[]){0, 2, 1}[j];
			bool collision = false;
			float3 axisStep = /*f3_new(i == 0 ? newPos.x : player->position.x, i == 1 ? newPos.y : player->position.y,
						 i == 2 ? newPos.z : player->position.z)*/ finalPos;
			axisStep.v[i] = newPos.v[i];
			Box playerBox =
			    Box_Create(axisStep.x - PLAYER_COLLISIONBOX_SIZE / 2.f, axisStep.y, axisStep.z - PLAYER_COLLISIONBOX_SIZE / 2.f,
				       PLAYER_COLLISIONBOX_SIZE, PLAYER_HEIGHT, PLAYER_COLLISIONBOX_SIZE);

			for (int x = -1; x < 2; x++) {
				for (int y = 0; y < 3; y++) {
					for (int z = -1; z < 2; z++) {
						int pX = FastFloor(axisStep.x) + x;
						int pY = FastFloor(axisStep.y) + y;
						int pZ = FastFloor(axisStep.z) + z;
						if (World_GetBlock(player->world, pX, pY, pZ) != Block_Air) {
							Box blockBox = Box_Create(pX, pY, pZ, 1, 1, 1);

							float3 normal = f3_new(0.f, 0.f, 0.f);
							float depth = 0.f;
							int face = 0;

							bool intersects =
							    Collision_BoxIntersect(blockBox, playerBox, 0, &normal, &depth, &face);
							collision |= intersects;
						}
					}
				}
			}
			if (!collision)
				finalPos.v[i] = newPos.v[i];
			else if (i == 1) {
				if (player->velocity.y < 0.f || accl.y < 0.f) player->grounded = true;
				player->jumped = false;
				player->velocity.x = 0.f;
				player->velocity.y = 0.f;
				player->velocity.z = 0.f;
			} else {
				wallCollision = true;
				if (i == 0)
					player->velocity.x = 0.f;
				else
					player->velocity.z = 0.f;
			}
		}

		float3 movDiff = f3_sub(finalPos, player->position);

		if (player->grounded && player->flying) player->flying = false;

		if (wallCollision && player->autoJumpEnabled) {
			float3 nrmDiff = f3_nrm(f3_sub(newPos, player->position));
			Block block = World_GetBlock(player->world, FastFloor(finalPos.x + nrmDiff.x),
						     FastFloor(finalPos.y + nrmDiff.y) + 2, FastFloor(finalPos.z + nrmDiff.z));
			Block landingBlock = World_GetBlock(player->world, FastFloor(finalPos.x + nrmDiff.x),
							    FastFloor(finalPos.y + nrmDiff.y) + 1, FastFloor(finalPos.z + nrmDiff.z));
			if (block == Block_Air && landingBlock != Block_Air) Player_Jump(player, accl);
		}

		if (player->crouching && player->crouchAdd > -0.3f) player->crouchAdd -= SimStep * 2.f;
		if (!player->crouching && player->crouchAdd < 0.0f) player->crouchAdd += SimStep * 2.f;

		if (player->crouching && !player->grounded && wasGrounded && finalPos.y < player->position.y && movDiff.x != 0.f &&
		    movDiff.z != 0.f) {
			finalPos = player->position;
			player->grounded = true;
			player->velocity.y = 0.f;
		}

		player->position = finalPos;
		player->velocity = f3_new(player->velocity.x * 0.95f, player->velocity.y, player->velocity.z * 0.95f);
		if (ABS(player->velocity.x) < 0.1f) player->velocity.x = 0.f;
		if (ABS(player->velocity.z) < 0.1f) player->velocity.z = 0.f;

		player->simStepAccum -= SimStep;
	}
}

void Player_PlaceBlock(Player* player) {
	if (player->world && player->blockInActionRange && player->breakPlaceTimeout < 0.f) {
		const int* offset = DirectionToOffset[player->viewRayCast.direction];
		if (AABB_Overlap(player->position.x - PLAYER_COLLISIONBOX_SIZE / 2.f, player->position.y,
				 player->position.z - PLAYER_COLLISIONBOX_SIZE / 2.f, PLAYER_COLLISIONBOX_SIZE, PLAYER_HEIGHT,
				 PLAYER_COLLISIONBOX_SIZE, player->viewRayCast.x + offset[0], player->viewRayCast.y + offset[1],
				 player->viewRayCast.z + offset[2], 1.f, 1.f, 1.f))
			return;
		World_SetBlockAndMeta(player->world, player->viewRayCast.x + offset[0], player->viewRayCast.y + offset[1],
				      player->viewRayCast.z + offset[2], player->quickSelectBar[player->quickSelectBarSlot].block,
				      player->quickSelectBar[player->quickSelectBarSlot].meta);
	}
	if (player->breakPlaceTimeout < 0.f) player->breakPlaceTimeout = PLAYER_PLACE_REPLACE_TIMEOUT;
}

void Player_BreakBlock(Player* player) {
	if (player->world && player->blockInActionRange && player->breakPlaceTimeout < 0.f) {
		World_SetBlock(player->world, player->viewRayCast.x, player->viewRayCast.y, player->viewRayCast.z, Block_Air);
	}
	if (player->breakPlaceTimeout < 0.f) player->breakPlaceTimeout = PLAYER_PLACE_REPLACE_TIMEOUT;
}

void Player_Teleport(Player* player, float x, float y, float z) {
	player->position.x = x;
	player->position.y = y;
	player->position.z = z;

	player->velocity = f3_new(0, 0, 0);
	Player_Update(player);
}
