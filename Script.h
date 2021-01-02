#pragma once

#ifndef _SCRIPT_H_


#include "Vector.h"


enum class Champion {
	Aatrox,
	Ahri,
	Akali,
	Alistar,
	Amumu,
	Anivia,
	Annie,
	Aphelios,
	Ashe,
	AurelionSol,
	Azir,
	Bard,
	Blitzcrank,
	Brand,
	Braum,
	Caitlyn,
	Camille,
	Cassiopeia,
	ChoGath,
	Corki,
	Darius,
	Diana,
	DrMundo,
	Draven,
	Ekko,
	Elise,
	Evelynn,
	Ezreal,
	Fiddlesticks,
	Fiora,
	Fizz,
	Galio,
	Gangplank,
	Garen,
	Gnar,
	Gragas,
	Graves,
	Hecarim,
	Heimerdinger,
	Illaoi,
	Irelia,
	Ivern,
	Janna,
	JarvanIV,
	Jax,
	Jayce,
	Jhin,
	Jinx,
	KaiSa,
	Kalista,
	Karma,
	Karthus,
	Kassadin,
	Katarina,
	Kayle,
	Kayn,
	Kennen,
	KhaZix,
	Kindred,
	Kled,
	KogMaw,
	LeBlanc,
	LeeSin,
	Leona,
	Lillia,
	Lissandra,
	Lucian,
	Lulu,
	Lux,
	Malphite,
	Malzahar,
	Maokai,
	MasterYi,
	MissFortune,
	Mordekaiser,
	Morgana,
	Nami,
	Nasus,
	Nautilus,
	Neeko,
	Nidalee,
	Nocturne,
	Olaf,
	Orianna,
	Ornn,
	Pantheon,
	Poppy,
	Pyke,
	Qiyana,
	Quinn,
	Rakan,
	Rammus,
	RekSai,
	Rell,
	Renekton,
	Rengar,
	Riven,
	Rumble,
	Ryze,
	Samira,
	Sejuani,
	Senna,
	Seraphine,
	Sett,
	Shaco,
	Shen,
	Shyvana,
	Singed,
	Sion,
	Sivir,
	Skarner,
	Sona,
	Soraka,
	Swain,
	Sylas,
	Syndra,
	TahmKench,
	Taliyah,
	Talon,
	Taric,
	Teemo,
	Thresh,
	Tristana,
	Trundle,
	Tryndamere,
	TwistedFate,
	Twitch,
	Udyr,
	Urgot,
	Varus,
	Vayne,
	Veigar,
	VelKoz,
	Vi,
	Viktor,
	Vladimir,
	Volibear,
	Warwick,
	Wukong,
	Xayah,
	Xerath,
	XinZhao,
	Yasuo,
	Yone,
	Yorick,
	Yuumi,
	Zac,
	Zed,
	Ziggs,
	Zilean,
	Zoe,
	Zyra
};

class IScript
{
private:
public:
	virtual ~IScript() {}
	virtual void OnKeyDown(int vKey) = 0;
	virtual void OnKeyUp(int vKey) = 0;
	virtual void Harass() = 0;
	virtual bool Evade(Vector3 evadePos) = 0;
};

extern IScript* championScript;






#endif // !_SCRIPT_H_
