#include <assert.h>
#include "AssetLoader.h"

AssetLoader::AssetLoader()
	: active(false)
{}

void AssetLoader::Create()
{
	active = true;
}

void AssetLoader::Destroy()
{
	active = false;
}

AssetLoader::~AssetLoader()
{
	assert(!active);
}
