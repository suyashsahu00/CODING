import { Card, CardBody, CardFooter, Image } from "@heroui/react";
import { title } from "@/components/primitives";
import DefaultLayout from "@/layouts/default";
import robotImage from "@/Images/line Follower robot.jpg"; 
import IIITNRBOT from "@/Images/IIIT Naya Raipur Dangle Bot.jpg";
import IIT_B_Boat from "@/Images/IIT B RoBoatic competion .jpg";
import IIT_B_Boat_2 from "@/Images/IIT B RoBoatic competion 2 .jpg";
import COEP_PUNE_Robowar from "@/Images/COEP Robowar BoT.jpg";
import Plant_disease_IIIT from "@/Images/result of diesease detection.png";

export default function ProjectPage() {
  const list = [
    {
      title: "Line Follower Robot",
      img: robotImage, 
      price: "Bot", 
    },
    {
      title: "IIIT NR Dangle Bot",
      img: IIITNRBOT, 
      price: "Bot",
    },
    {
      title: "COEP Pune Roboawar ",
      img: COEP_PUNE_Robowar,
      price: "Robowar Bot",
    },
    {
      title: "Boat for RoBoatic competion",
      img: IIT_B_Boat,
      price: "Boat",
    },
    {
      title: "Boat for RoBoatic",
      img: IIT_B_Boat_2,
      price: "Boats",
    },
    {
      title: "Plant Diease Detection",
      img: Plant_disease_IIIT,
      price: "ML-DL Model",
    },
  ];

  return (
    <DefaultLayout>
      <section className="flex flex-col items-center justify-center gap-4 py-8 md:py-10">
        <div className="inline-block max-w-lg text-center justify-center">
          <h1 className={title()}>Projects</h1>
        </div>
        <div className="gap-4 grid grid-cols-2 sm:grid-cols-3">
          {list.map((item, index) => (
            <Card shadow="sm" key={index} isPressable onPress={() => console.log("item pressed")}>
              <CardBody className="overflow-visible p-0">
                <Image
                  shadow="sm"
                  radius="lg"
                  width="100%"
                  alt={item.title}
                  className="w-full object-cover h-[180px]"
                  src={item.img}
                />
              </CardBody>
              <CardFooter className="text-small justify-between">
                <b>{item.title}</b>
                <p className="text-default-500">{item.price}</p>
              </CardFooter>
            </Card>
          ))}
        </div>
      </section>
    </DefaultLayout>
  );
}