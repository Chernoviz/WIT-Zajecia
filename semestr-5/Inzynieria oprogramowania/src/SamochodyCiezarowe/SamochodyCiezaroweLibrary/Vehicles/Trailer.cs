﻿using System;
using SamochodyCiezaroweLibrary.Items;
using SamochodyCiezaroweLibrary.Storages;

namespace SamochodyCiezaroweLibrary.Vehicles
{
    public class Trailer : NonMotorizedVehicle, ILoadable
    {
        public Trailer()
        {
        }

        public Trailer(Vehicle vehicle) : base(vehicle)
        {
        }

        public Trailer(Trailer trailer) : base(trailer)
        {
            ParentId = trailer.ParentId;
            Storage = new StorageBuilder().Build(trailer.Storage);
        }

        public override VehicleType VehicleType => VehicleType.Trailer;
        public override string TypeDescription => "Przyczepa";
        public int ParentId { get; set; }

        public Storage Storage { get; set; } = new BoxStorage();

        public void Load(Item item)
        {
            throw new NotImplementedException();
        }

        public void Unload()
        {
            throw new NotImplementedException();
        }
    }
}