import DefaultLayout from "@/layouts/default";
import { Card, CardHeader, CardBody, CardFooter } from "@heroui/card";
import { Link } from "@heroui/link";

export default function AboutSection() {
  return (
    <DefaultLayout>
      <section className="flex flex-col items-center justify-center py-8 md:py-10">
        <Card className="max-w-xl w-full" radius="lg" shadow="lg">
          <CardHeader>
            <h2 className="text-2xl font-bold">About Me</h2>
          </CardHeader>
          <CardBody>
            <p className="text-lg">
              Hi! I'm Suyash Sahu, a passionate developer with experience in C++, Python, Robotics, HTML, CSS, JavaScript, React, Tailwind, and Arduino. I love building interactive and accessible web applications and exploring new technologies.
            </p>
          </CardBody>
          <CardFooter>
            <div className="flex flex-col gap-2">
              <span className="text-base font-semibold">Contact</span>
              <span>Phone: +91 7354013399</span>
              <span>Email: <Link href="mailto:suyashsahu00@gmail.com" color="primary" underline="hover">suyashsahu00@gmail.com</Link></span>
              <span>
                GFG Profile:{" "}
                <Link
                  href="https://www.geeksforgeeks.org/user/suyashsyyyp/"
                  color="success"
                  underline="hover"
                  isExternal
                >
                  https://www.geeksforgeeks.org/user/suyashsyyyp/
                </Link>
              </span>
            </div>
          </CardFooter>
        </Card>
      </section>
    </DefaultLayout>
  );
}