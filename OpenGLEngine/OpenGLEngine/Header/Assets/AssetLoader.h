#ifndef ASSETLOADER_H
#define ASSETLOADER_H

class AssetLoader
{
public:
	AssetLoader();
	void Create();
	void Destroy();
	~AssetLoader();

private:
	bool active;
};

#endif